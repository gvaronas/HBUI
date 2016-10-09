
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN void uiRadioButtonsAppend(uiRadioButtons *r, const char *text);
HB_FUNC( UIRADIOBUTTONSAPPEND ) {
    uiRadioButtons *r = hb_parptr( 1 );
    if( r ) {
        uiRadioButtonsAppend( r, hb_parc( 2 ) );
    }
}

//_UI_EXTERN int uiRadioButtonsSelected(uiRadioButtons *r);
HB_FUNC( UIRADIOBUTTONSSELECTED ) {
    uiRadioButtons *r = hb_parptr( 1 );
    if( r ) {
        hb_retni( uiRadioButtonsSelected( r ) );
    }
}

//_UI_EXTERN void uiRadioButtonsSetSelected(uiRadioButtons *r, int n);
HB_FUNC( UIRADIOBUTTONSSETSELECTED ) {
    uiRadioButtons *r = hb_parptr( 1 );
    if( r ) {
        uiRadioButtonsSetSelected( r, hb_parni( 2 ) );
    }
}

//_UI_EXTERN void uiRadioButtonsOnSelected(uiRadioButtons *r, void (*f)(uiRadioButtons *, void *), void *data);

//_UI_EXTERN uiRadioButtons *uiNewRadioButtons(void);
HB_FUNC( UINEWRADIOBUTTONS ) {
    hb_retptr( uiNewRadioButtons() );
}
