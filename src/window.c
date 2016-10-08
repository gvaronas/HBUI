
#include "hbapi.h"
#include "ui.h"

static int onClosing(uiWindow *w, void *data)
{
	uiQuit();
	return 1;
}

static int onShouldQuit(void *data)
{
	uiWindow *mainwin = uiWindow( data );
	uiControlDestroy( uiControl( mainwin ) );
	return 1;
}

static void registerOnCloseFunction( PHB_ITEM pFunction ) {

}

static void registerOnContenFunction( PHB_ITEM pFunction ) {

}

static void registerOnPositionFunction( PHB_ITEM pFunction ) {

}

//_UI_EXTERN char *uiWindowTitle(uiWindow *w);
HB_FUNC( UIWINDOWTITLE ) {
    uiWindow *w = hb_parptr( 1 );
		if( w ) {
			hb_parc( uiWindowTitle( w ) );
		}
}

//_UI_EXTERN void uiWindowSetTitle(uiWindow *w, const char *title);
HB_FUNC( UIWINDOWSETTITLE ) {
    uiWindow *w = hb_parptr( 1 );
    if( w ) {
			  const char *title = hb_parc( 2 );
			  uiWindowSetTitle( w, title );
		}
}

//_UI_EXTERN void uiWindowPosition(uiWindow *w, int *x, int *y);
HB_FUNC( UIWINDOWPOSITION ) {
    uiWindow *w = hb_parptr( 1 );
		if( w ) {
			  int *x = hb_parni( 2 );
			  int *y = hb_parni( 3 );
			  uiWindowPosition( w, x, y );
		}
}

//_UI_EXTERN void uiWindowSetPosition(uiWindow *w, int x, int y);
HB_FUNC( UIWINDOWSETPOSITION ) {
    uiWindow *w = hb_retptr( 1 );
		if( w ) {
			  int x = hb_retni( 2 );
				int y = hb_retni( 3 );
				uiWindowSetPosition( w, x, y );
		}
}

//_UI_EXTERN void uiWindowCenter(uiWindow *w);
HB_FUNC( UIWINDOWCENTER ) {
    uiWindow *w = hb_parptr( 1 );
	  if( w ) {
			  uiWindowCenter( w );
		}
}

//_UI_EXTERN void uiWindowOnPositionChanged(uiWindow *w, void (*f)(uiWindow *, void *), void *data);
HB_FUNC( UIWINDOWONPOSITIONCHANGED ) {
    uiWindow *w = hb_parptr( 1 );
		PHB_ITEM pFunction = hb_pparam( 2, HB_IT_ANY );
		if( w ) {
			  void *data = hb_parptr( 3 );
				registerOnPositionFunction( pFunction );
				uiWindowOnPositionChanged( w, onPosition, data );
		}
}
---
//_UI_EXTERN void uiWindowOnClosing(uiWindow *w, int (*f)(uiWindow *w, void *data), void *data);
HB_FUNC( UIWINDOWONCLOSING ) {
    uiWindow *w = hb_parptr( 1 );
    PHB_ITEM pFunction = hb_param( 2, HB_IT_ANY );
    if( w && pFunction ) {
        void *data = hb_parptr( 3 );
        registerOnCloseFunction( pFunction );
        uiWindowOnClosing( w, onClosing, data );
    }
}

---
//_UI_EXTERN void uiWindowContentSize(uiWindow *w, int *width, int *height);
HB_FUNC( UIWINDOWCONTENTSIZE ) {
    uiWindow *w = hb_parptr( 1 );
		if( w ) {
			  int *width = hb_parptr( 2 );
				int *height = hb_parptr( 3 );
				uiWindowContentSize( w, width, height );
		}
}

//_UI_EXTERN void uiWindowSetContentSize(uiWindow *w, int width, int height);
HB_FUNC( UIWINDOWSETCONTENTSIZE ) {
    uiWindow *w = hb_parptr( 1 );
		if( w ) {
			  int width = hb_parni( 2 );
				int height = hb_parni( 3 );
				uiWindowSetContentSize( w, width, height );
		}
}
//_UI_EXTERN int uiWindowFullscreen(uiWindow *w);
HB_FUNC( UIWINDOWFULLSCREEN ) {
    uiWindow *w = hb_parptr( 1 );
		if( w ) {
			  hb_retni( uiWindowFullscreen( w ) );
		}
}

//_UI_EXTERN void uiWindowSetFullscreen(uiWindow *w, int fullscreen);
HB_FUNC( UIWINDOWSETFULLSCREEN ) {
    uiWindow *w = hb_parptr( 1 );
	  if( w ) {
        int fullscreen = hb_retni( 2 );
			  uiWindowSetFullscreen( w, fullscreen );
		}
}

//_UI_EXTERN void uiWindowOnContentSizeChanged(uiWindow *w, void (*f)(uiWindow *, void *), void *data);
HB_FUNC( UIWINDOWONCONTENTSIZECHANGED ) {
    uiWindow *w = hb_parptr( 1 );
		PHB_ITEM pFunction = hb_param( 2, HB_IT_ANY );
		if( w && pFunction ) {
			  void *data = hb_parptr( 3 );
				registerOnContenFunction( pFunction );
				uiWindowOnContentSizeChanged( w, onContent, data );
		}
}

//_UI_EXTERN void uiWindowOnClosing(uiWindow *w, int (*f)(uiWindow *w, void *data), void *data);
HB_FUNC( UIWINDOWONCLOSING ) {
    uiWindow *w = hb_parptr( 1 );
    PHB_ITEM pFunction = hb_param( 2, HB_IT_ANY );
    if( w && pFunction ) {
        void *data = hb_parptr( 3 );
        registerOnCloseFunction( pFunction );
        uiWindowOnClosing( w, onClosing, data );
    }
}

//_UI_EXTERN int uiWindowBorderless(uiWindow *w);
HB_FUNC( UIWINDOWBORDERLESS ) {
    uiWindow *w = hb_parptr( 1 );
    if( w ) {
        hb_retni( uiWindowBorderless( w ) );
    }
}

//_UI_EXTERN void uiWindowSetBorderless(uiWindow *w, int borderless);
HB_FUNC( UIWINDOWSETBORDERLESS ) {
    uiWindow *w = hb_parptr( 1 );
    if( w ) {
        uiWindowSetBorderless( w, hb_parni( 2 ) );
    }
}

//_UI_EXTERN void uiWindowSetChild(uiWindow *w, uiControl *child);
HB_FUNC( UIWINDOWSETCHILD ) {
    uiWindow *w = hb_parptr( 1 );
    uiControl *child = hb_parptr( 2 );
    if( w && child ) {
        uiWindowSetChild( w, child );
    }
}

//_UI_EXTERN int uiWindowMargined(uiWindow *w);
HB_FUNC( UIWINDOWMARGINED ) {
    uiWindow *w = hb_parptr( 1 );
    if( w ) {
        hb_retni( uiWindowMargined( w ) );
    }
}

//_UI_EXTERN void uiWindowSetMargined(uiWindow *w, int margined);
HB_FUNC( UIWINDOWSETMARGINED ) {
    uiWindow *w = hb_parptr( 1 );
    if( w ) {
        uiWindowSetMargined( w, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiWindow *uiNewWindow(const char *title, int width, int height, int hasMenubar);
HB_FUNC( UINEWWINDOW ) {
    const char *title = hb_parc( 1 );
    int width = hb_parni( 2 );
    int height = hb_parni( 3 );
    HB_BOOL hasMenu = hb_parl( 4 );
    uiWindow *w = uiNewWindow( title, width, height, hasMenu );
	uiWindowOnClosing(w, onClosing, NULL);
	uiOnShouldQuit(onShouldQuit, w);
    hb_retptr( w );
}
