
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN char *uiButtonText(uiButton *b);
HB_FUNC( UIBUTTONTEXT ) {
    uiButton *b = hb_parptr( 1 );
    if( b ) {
        hb_retc( uiButtonText( b ) );
    }
}

//_UI_EXTERN void uiButtonSetText(uiButton *b, const char *text);
HB_FUNC( UIBUTTONSETTEXT ) {
    uiButton *b = hb_parptr( 1 );
    if( b ) {
        uiButtonSetText( b, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiButtonOnClicked(uiButton *b, void (*f)(uiButton *b, void *data), void *data);

//_UI_EXTERN uiButton *uiNewButton(const char *text);
HB_FUNC( UINEWBUTTON ) {
    hb_retptr( uiNewButton( hb_parc( 1 ) ) );
}
