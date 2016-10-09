
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN int uiSpinboxValue(uiSpinbox *s);
HB_FUNC( UISPINBOXVALUE ) {
    uiSpinbox *s = hb_parptr( 1 );
    if( s ) {
        hb_retni( uiSpinboxValue( s ) );
    }
}

//_UI_EXTERN void uiSpinboxSetValue(uiSpinbox *s, int value);
HB_FUNC( UISPINBOXSETVALUE ) {
    uiSpinbox *s = hb_parptr( 1 );
    if( s ) {
        uiSpinboxSetValue( s, hb_parni( 2 ) );
    }
}

//_UI_EXTERN void uiSpinboxOnChanged(uiSpinbox *s, void (*f)(uiSpinbox *s, void *data), void *data);

//_UI_EXTERN uiSpinbox *uiNewSpinbox(int min, int max);
HB_FUNC( UINEWSPINBOX ) {
    hb_retptr( uiNewSpinbox( hb_parni( 1 ), hb_parni( 2 ) ) );
}
