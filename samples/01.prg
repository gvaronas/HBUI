
#include "hbui.ch"

FUNCTION Main()
    LOCAL w
    LOCAL tab

    IF ! uiInit()
        alert("Failed to initializa libui...")
        RETURN nil
    ENDIF

    w := uiNewWindow("Welcome to Harbour HBUI (https://github.com/RJopek/HBUI) !",640,400,1)

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
	LOCAL hbox
	LOCAL group
	LOCAL vbox
	LOCAL ip
    LOCAL cbox
	LOCAL ecbox
	LOCAL rb
    LOCAL spinbox
    LOCAL slider
    LOCAL pbar

	hbox := uiNewHorizontalBox()
	uiBoxSetPadded(hbox, 1)

	group := uiNewGroup("Numbers")
	uiGroupSetMargined(group, 1)
	uiBoxAppend(hbox, group, 1)

	vbox := uiNewVerticalBox()
	uiBoxSetPadded(vbox, 1)
	uiGroupSetChild(group, vbox)

	spinbox := uiNewSpinbox(0, 100)
	slider := uiNewSlider(0, 100)
	pbar := uiNewProgressBar()
//	uiSpinboxOnChanged(spinbox, onSpinboxChanged, nil)
//	uiSliderOnChanged(slider, onSliderChanged, nil)
	uiBoxAppend(vbox, spinbox, 0)
	uiBoxAppend(vbox, slider, 0)
	uiBoxAppend(vbox, pbar, 0)

	ip := uiNewProgressBar()
	uiProgressBarSetValue(ip, -1)
	uiBoxAppend(vbox, ip, 0)

	group := uiNewGroup("Lists")
	uiGroupSetMargined(group, 1)
	uiBoxAppend(hbox, group, 1)

	vbox := uiNewVerticalBox()
	uiBoxSetPadded(vbox, 1)
	uiGroupSetChild(group, vbox)

	cbox := uiNewCombobox()
	uiComboboxAppend(cbox, "Combobox Item 1")
	uiComboboxAppend(cbox, "Combobox Item 2")
	uiComboboxAppend(cbox, "Combobox Item 3")
	uiBoxAppend(vbox, cbox, 0)

	ecbox := uiNewEditableCombobox()
	uiEditableComboboxAppend(ecbox, "Editable Item 1")
	uiEditableComboboxAppend(ecbox, "Editable Item 2")
	uiEditableComboboxAppend(ecbox, "Editable Item 3")
	uiBoxAppend(vbox, ecbox, 0)

	rb := uiNewRadioButtons()
	uiRadioButtonsAppend(rb, "Radio Button 1")
	uiRadioButtonsAppend(rb, "Radio Button 2")
	uiRadioButtonsAppend(rb, "Radio Button 3")
	uiBoxAppend(vbox, rb, 0)

RETURN hbox

STATIC FUNCTION makeDataChoosersPage()
	LOCAL hbox
	LOCAL vbox
	LOCAL grid
	LOCAL button
	LOCAL entry
	LOCAL msggrid

	hbox := uiNewHorizontalBox()
	uiBoxSetPadded(hbox, 1)

	vbox := uiNewVerticalBox()
	uiBoxSetPadded(vbox, 1)
	uiBoxAppend(hbox, vbox, 0)

	uiBoxAppend(vbox, uiNewDatePicker(), 0)
	uiBoxAppend(vbox, uiNewTimePicker(), 0)
	uiBoxAppend(vbox, uiNewDateTimePicker(), 0)

	uiBoxAppend(vbox, uiNewFontButton(), 0)
	uiBoxAppend(vbox, uiNewColorButton(), 0)

	uiBoxAppend(hbox, uiNewVerticalSeparator(), 0)

	vbox := uiNewVerticalBox()
	uiBoxSetPadded(vbox, 1)
	uiBoxAppend(hbox, vbox, 1)

	grid := uiNewGrid()
	uiGridSetPadded(grid, 1)
	uiBoxAppend(vbox, grid, 0)

	button := uiNewButton("Open File")
	entry := uiNewEntry()
	uiEntrySetReadOnly(entry, 1)
//	uiButtonOnClicked(button, onOpenFileClicked, entry)
	uiGridAppend(grid, button, 0, 0, 1, 1, 0, uiAlignFill, 0, uiAlignFill)
	uiGridAppend(grid, entry, 1, 0, 1, 1, 1, uiAlignFill, 0, uiAlignFill)

	button := uiNewButton("Save File")
	entry := uiNewEntry()
	uiEntrySetReadOnly(entry, 1)
//	uiButtonOnClicked(button, onSaveFileClicked, entry)
	uiGridAppend(grid, button, 0, 1, 1, 1, 0, uiAlignFill, 0, uiAlignFill)
	uiGridAppend(grid, entry, 1, 1, 1, 1, 1, uiAlignFill, 0, uiAlignFill)

	msggrid := uiNewGrid()
	uiGridSetPadded(msggrid, 1)
	uiGridAppend(grid, msggrid, 0, 2, 2, 1, 0, uiAlignCenter, 0, uiAlignStart)

	button := uiNewButton("Message Box")
//	uiButtonOnClicked(button, onMsgBoxClicked, nil)
	uiGridAppend(msggrid, button, 0, 0, 1, 1, 0, uiAlignFill, 0, uiAlignFill)
	button := uiNewButton("Error Box")
//	uiButtonOnClicked(button, onMsgBoxErrorClicked, nil)
	uiGridAppend(msggrid, button, 1, 0, 1, 1, 0, uiAlignFill, 0, uiAlignFill)

RETURN hbox
