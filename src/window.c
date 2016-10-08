
#include "hbapi.h"
#include "ui.h"

static int onClosing(uiWindow *w, void *data)
{
	uiQuit();
	return 1;
}

static int onShouldQuit(void *data)
{
	uiWindow *mainwin = uiWindow(data);
	uiControlDestroy(uiControl(mainwin));
	return 1;
}

static void registerOnCloseFunction( PHB_ITEM pFunction ) {

}

//_UI_EXTERN char *uiWindowTitle(uiWindow *w);
//_UI_EXTERN void uiWindowSetTitle(uiWindow *w, const char *title);
//_UI_EXTERN void uiWindowPosition(uiWindow *w, int *x, int *y);
//_UI_EXTERN void uiWindowSetPosition(uiWindow *w, int x, int y);
//_UI_EXTERN void uiWindowCenter(uiWindow *w);
//_UI_EXTERN void uiWindowOnPositionChanged(uiWindow *w, void (*f)(uiWindow *, void *), void *data);
//_UI_EXTERN void uiWindowContentSize(uiWindow *w, int *width, int *height);
//_UI_EXTERN void uiWindowSetContentSize(uiWindow *w, int width, int height);
//_UI_EXTERN int uiWindowFullscreen(uiWindow *w);
//_UI_EXTERN void uiWindowSetFullscreen(uiWindow *w, int fullscreen);
//_UI_EXTERN void uiWindowOnContentSizeChanged(uiWindow *w, void (*f)(uiWindow *, void *), void *data);

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
