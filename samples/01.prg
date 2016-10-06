
FUNCTION Main()
    LOCAL w

    w := uiNewWindow("main Window",100,100,1)
//    w := "main Window"

    ? "pointer:", w

    uiControlShow( w )

    uiMain()
    uiUninit()

    inkey( 0 )

RETURN nil
