
FUNCTION Main()
    LOCAL w
    LOCAL tab

    IF ! uiInit()
        alert("Failed to initializa libui...")
        RETURN nil
    ENDIF

    w := uiNewWindow("main Window",640,400,1)

    tab := uiNewTab()
    uiWindowSetChild( w, tab )
    uiWindowSetMargined( w, 1 )

    uiTabAppend( tab, "Basic Controls", makeBasicControlsPage() )
	uiTabSetMargined( tab, 0, 1 )

	uiTabAppend( tab, "Numbers and Lists", makeNumbersPage() )
	uiTabSetMargined( tab, 1, 1 )

	uiTabAppend( tab, "Data Choosers", makeDataChoosersPage() )
	uiTabSetMargined( tab, 2, 1 )

    uiControlShow( w )
    uiMain()

RETURN nil

STATIC FUNCTION makeBasicControlsPage()
    LOCAL vbox
	LOCAL hbox
	LOCAL group
	LOCAL entryForm

	vbox := uiNewVerticalBox()
	uiBoxSetPadded(vbox, 1)

	hbox := uiNewHorizontalBox()
	uiBoxSetPadded(hbox, 1)
	uiBoxAppend(vbox, hbox, 0)

	uiBoxAppend(hbox, uiNewButton("Button"), 0)
	uiBoxAppend(hbox, uiNewCheckbox("Checkbox"), 0)

	uiBoxAppend(vbox, uiNewLabel("This is a label. Right now, labels can only span one line."), 0)

	uiBoxAppend(vbox, uiNewHorizontalSeparator(), 0)

	group := uiNewGroup("Entries")
	uiGroupSetMargined(group, 1)
	uiBoxAppend(vbox, group, 1)

	entryForm := uiNewForm()
	uiFormSetPadded(entryForm, 1)
	uiGroupSetChild(group, entryForm)

	uiFormAppend(entryForm, "Entry", uiNewEntry(), 0)
	uiFormAppend(entryForm, "Password Entry", uiNewPasswordEntry(), 0)
	uiFormAppend(entryForm, "Search Entry", uiNewSearchEntry(), 0)
	uiFormAppend(entryForm, "Multiline Entry", uiNewMultilineEntry(), 1)
	uiFormAppend(entryForm, "Multiline Entry No Wrap", uiNewNonWrappingMultilineEntry(), 1)

RETURN vbox

STATIC FUNCTION makeNumbersPage()
RETURN makeBasicControlsPage()

STATIC FUNCTION makeDataChoosersPage()
RETURN makeBasicControlsPage()
