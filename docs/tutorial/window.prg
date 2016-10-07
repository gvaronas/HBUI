/*
 * RJ
 */

FUNCTION Main()
    LOCAL w

    IF ! uiInit()
        alert("Failed to initializa libui...")
        RETURN nil
    ENDIF

    w := uiNewWindow("main Window",800,600,.T.)

    ? "pointer:", w

    uiControlShow( w )

    uiMain()
    uiUninit()

RETURN nil
