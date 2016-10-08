
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN char *uiGroupTitle(uiGroup *g);
HB_FUNC( UIGROUPTITLE ) {
    uiGroup *g = hb_parptr( 1 );
    if( g ) {
        hb_retc( uiGroupTitle( g ) );
    }
}

//_UI_EXTERN void uiGroupSetTitle(uiGroup *g, const char *title);
HB_FUNC( UIGROUPSETTITLE ) {
    uiGroup *g = hb_parptr( 1 );
    if( g ) {
        uiGroupSetTitle( g, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiGroupSetChild(uiGroup *g, uiControl *c);
HB_FUNC( UIGROUPSETCHILD ) {
    uiGroup *g = hb_parptr( 1 );
    uiControl *c = hb_parptr( 2 );
    if( g && c ) {
        uiGroupSetChild( g, c );
    }
}

//_UI_EXTERN int uiGroupMargined(uiGroup *g);
HB_FUNC( UIGROUPMARGINED ) {
    uiGroup *g = hb_parptr( 1 );
    if( g ) {
        hb_retni( uiGroupMargined( g ) );
    }
}

//_UI_EXTERN void uiGroupSetMargined(uiGroup *g, int margined);
HB_FUNC( UIGROUPSETMARGINED ) {
    uiGroup *g = hb_parptr( 1 );
    if( g ) {
        uiGroupSetMargined( g, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiGroup *uiNewGroup(const char *title);
HB_FUNC( UINEWGROUP ) {
    hb_retptr( uiNewGroup( hb_parc( 1 ) ) );
}
