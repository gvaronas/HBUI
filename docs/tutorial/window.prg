/*
 * RJ
 */

FUNCTION Main()
  LOCAL oWindow
 
  IF ! uiInit()
        Alert( "Failed to initializa libui..." )
    RETURN NIL
  ENDIF

  oWindow := uiNewWindow( "main Window", 800, 600, .T. )

  ? "pointer:", oWindow

  uiControlShow( oWindow )

  uiMain()
  uiUninit()

RETURN NIL
