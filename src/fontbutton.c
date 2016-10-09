
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN uiDrawTextFont *uiFontButtonFont(uiFontButton *b);
HB_FUNC( UIFONTBUTTONFONT ) {
    uiFontButton *b = hb_parptr( 1 );
    if( b ) {
        hb_retptr( uiFontButtonFont( b ) );
    }
}

//_UI_EXTERN void uiFontButtonOnChanged(uiFontButton *b, void (*f)(uiFontButton *, void *), void *data);

//_UI_EXTERN uiFontButton *uiNewFontButton(void);
HB_FUNC( UINEWFONTBUTTON ) {
    hb_retptr( uiNewFontButton() );
}
