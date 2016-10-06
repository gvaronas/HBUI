# **uiWindow**


## Description
Provides the ability to create, configure, show, and manage the lifetime of windows and dialog boxes.

## Functions
- [uiNewWindow( title, width, height, hasMenubar )](#uinewwindow-title-width-height-hasmenubar)
- [uiWindowBorderless( uiWindow )](#uiwindowborderless-uiwindow)
- [uiWindowCenter( uiWindow )](#uiwindowcenter-uiwindow)
- [uiWindowContentSize( uiWindow, width, height )](#uiwindowcontentsize-uiwindow-width-height)
- [uiWindowFullscreen( uiWindow )](#uiwindowfullscreen-uiwindow)
- [uiWindowMargined( uiWindow )](#uiwindowmargined-uiwindow)
- [uiWindowOnClosing( uiWindow onClosing data)](#uiwindowonclosing-uiwindow-onclosing-data)
- [uiWindowOnContentSizeChanged( onShouldQuit, uiWindow )](#uiwindowoncontentsizechanged-onshouldquit-uiwindow)
- [uiWindowOnPositionChanged( uiWindow, onMove, data )](#uiwindowonpositionchanged-uiwindow-onmove-data)
- [uiWindowPosition( uiWindow, x, y )](#uiwindowposition-uiwindow-x-y)
- [uiWindowSetBorderless( uiWindow, borderless )](#uiwindowsetborderless-uiwindow-borderless)
- [uiWindowSetChild( uiWindow, uiControl )](#uiwindowsetchild-uiwindow-uicontrol)
- [uiWindowSetContentSize( uiWindow, width, height )](#uiwindowsetcontentsize-uiwindow-width-height)
- [uiWindowSetFullscreen( uiWindow, fullscreen )](#uiwindowsetfullscreen-uiwindow-fullscreen)
- [uiWindowSetMargined( uiWindow, margined )](#uiwindowsetmargined-uiwindow-margined)
- [uiWindowSetPosition( uiWindow, x, y )](#uiwindowsetposition-uiwindow-x-y)
- [uiWindowSetTitle( uiWindow, title )](#uiwindowsettitle-uiwindow-title)
- [uiWindowTitle( uiWindow )](#uiwindowtitle-uiwindow)

## uiNewWindow( title, width, height, hasMenubar )
Arguments
- title
- width
- height
- hasMenubar

Return value

Description

Simple example
```
oWindow := uiNewWindow( "Hello Harbour!", 800, 600, .T. )
```
## uiWindowBorderless( uiWindow )
Arguments
- uiWindow

Return value

Description

Simple example
```
uiWindowBorderless( oWindow )
```
## uiWindowCenter( uiWindow )
Arguments
- uiWindow

Return value

Description

Simple example
```
uiWindowCenter( oWindow )
```
## uiWindowContentSize( uiWindow, width, height )
Arguments
- uiWindow
- width
- height

Return value

Description

Simple example
```
uiWindowContentSize( oWindow, 800, 600 )
```
## uiWindowFullscreen( uiWindow )
Arguments
- uiWindow

Return value

Description

Simple example
```
uiWindowFullscreen( oWindow )
```
## uiWindowMargined( uiWindow )
Arguments
- uiWindow

Return value

Description

Simple example
```
uiWindowMargined( oWindow )
```
## uiWindowOnClosing( uiWindow, onClosing, data )
Arguments
- uiWindow
- onClosing
- data

Return value

Description

Simple example
```
uiWindowOnClosing( oWindow, onClosing, NULL )
```
## uiWindowOnContentSizeChanged( onShouldQuit, uiWindow )
Arguments
- onShouldQuit
- uiWindow

Return value

Description

Simple example
```
uiWindowOnContentSizeChanged( onShouldQuit, oWindow )
```
## uiWindowOnPositionChanged( uiWindow, onMove, data )
Arguments
- uiWindow
- onMove
- data

Return value

Description

Simple example
```
uiWindowOnPositionChanged( oWindow, onMove, NULL )
```
## uiWindowPosition( uiWindow, x, y )
Arguments
- uiWindow
- x
- y

Return value

Description

Simple example
```
uiWindowPosition( oWindow, 50, 50 )
```
## uiWindowSetBorderless( uiWindow, borderless )
Arguments
- uiWindow
- borderless

Return value

Description

Simple example
```
uiWindowSetBorderless( oWindow, uiCheckboxChecked( oCheckbox ) )
```
## uiWindowSetChild( uiWindow, uiControl )
Arguments
- uiWindow
- uiControl

Return value

Description

Simple example
```
uiWindowSetChild( oWindow, uiControl( oButton ) )
```
## uiWindowSetContentSize( uiWindow, width, height )
Arguments
- uiWindow
- width
- height

Return value

Description

Simple example
```
uiWindowSetContentSize( oWindow, 800, 600 )
```
## uiWindowSetFullscreen( uiWindow, fullscreen )
Arguments
- uiWindow
- fullscreen

Return value

Description

Simple example
```
uiWindowSetFullscreen( oWindow, uiCheckboxChecked( fullscreen ) )
```
## uiWindowSetMargined( uiWindow, margined )
Arguments
- uiWindow
- margined

Return value

Description

Simple example
```
uiWindowSetMargined( oWindow, 1 )
```
## uiWindowSetPosition( uiWindow, x, y )
Arguments
- uiWindow
- x
- y

Return value

Description

Simple example
```
uiWindowSetPosition( oWindow, 50, 50 )
```
## uiWindowSetTitle( uiWindow, title )
Arguments
- uiWindow
- title

Return value

Description

Simple example
```
uiWindowSetTitle( oWindow, "Hello world!" )
```
## uiWindowTitle( uiWindow )
Arguments
- uiWindow

Return value

Description

Simple example
```
uiWindowTitle( oWindow )
```
## Sample source code
```


```

## Screenshots
![Linux](../tutorial/uiWindow_Linux.png "With family Linux Elementary desktop Pantheon, based on GNOME")
