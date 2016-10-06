
#include "hbapi.h"
#include "../../../libui/ui.h"

HB_FUNC( UINEWWINDOW ) {
    const char *title = hb_parc( 1 );
    int width = hb_parni( 2 );
    int height = hb_parni( 3 );
    HB_BOOL hasMenu = hb_parl( 4 );
    uiWindow *w = uiNewWindow( title, width, height, hasMenu );
    hb_retptr( w );
}

HB_FUNC( UICONTROLSHOW ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        uiControlShow( uiControl( c ) );
    }
}

HB_FUNC( UIMAIN ) {
    uiMain();
}

HB_FUNC( UIUNINIT ) {
    uiUninit();
}
