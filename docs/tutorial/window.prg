/*
 * RJ
 */

FUNCTION Main()
    LOCAL w

    w := uiNewWindow("main Window",800,600,.T.)

    ? "pointer:", w

    uiControlShow( w )

    uiMain()
    uiUninit()

RETURN nil
