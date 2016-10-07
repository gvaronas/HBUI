
#include "hbapi.h"
#include "ui.h"

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
    int (*f)( uiWindow *, void * );
    void *data = hb_parptr( 3 );
    if( w && f) {
        uiWindowOnClosing( w, f, data );
    }
}

//_UI_EXTERN int uiWindowBorderless(uiWindow *w);
//_UI_EXTERN void uiWindowSetBorderless(uiWindow *w, int borderless);
//_UI_EXTERN void uiWindowSetChild(uiWindow *w, uiControl *child);
//_UI_EXTERN int uiWindowMargined(uiWindow *w);
//_UI_EXTERN void uiWindowSetMargined(uiWindow *w, int margined);

//_UI_EXTERN uiWindow *uiNewWindow(const char *title, int width, int height, int hasMenubar);
HB_FUNC( UINEWWINDOW ) {
    const char *title = hb_parc( 1 );
    int width = hb_parni( 2 );
    int height = hb_parni( 3 );
    HB_BOOL hasMenu = hb_parl( 4 );
    uiWindow *w = uiNewWindow( title, width, height, hasMenu );
    hb_retptr( w );
}
