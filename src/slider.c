
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN int uiSliderValue(uiSlider *s);
HB_FUNC( UISLIDERVALUE ) {
    uiSlider *s = hb_parptr( 1 );
    if( s ) {
        hb_retni( uiSliderValue( s ) );
    }
}

//_UI_EXTERN void uiSliderSetValue(uiSlider *s, int value);
HB_FUNC( UISLIDERSETVALUE ) {
    uiSlider *s = hb_parptr( 1 );
    if( s ) {
        uiSliderSetValue( s, hb_parni( 2 ) );
    }
}

//_UI_EXTERN void uiSliderOnChanged(uiSlider *s, void (*f)(uiSlider *s, void *data), void *data);

//_UI_EXTERN uiSlider *uiNewSlider(int min, int max);
HB_FUNC( UINEWSLIDER ) {
    hb_retptr( uiNewSlider( hb_parni( 1 ), hb_parni( 2 ) ) );
}
