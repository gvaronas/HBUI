
FUNCTION Main()
    LOCAL w

    IF uiInit()
        alert("Failed to initializa libui...")
        RETURN nil
    ENDIF

    w := uiNewWindow("main Window",100,100,1)
//    w := "main Window"

    ? "pointer:", w

    uiControlShow( w )

    uiMain()
    uiUninit()

RETURN nil
