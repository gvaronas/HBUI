
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN void uiColorButtonColor(uiColorButton *b, double *r, double *g, double *bl, double *a);
HB_FUNC( UICOLORBUTTONCOLOR ) {
    uiColorButton *b = hb_parptr( 1 );
    if( b && HB_IS_BYREF( 2 ) && HB_IS_BYREF( 3 ) && HB_IS_BYREF( 4 ) && HB_IS_BYREF( 5 ) ) {
        double r;
        double g;
        double bl;
        double a;
        uiColorButtonColor( b, &r, &g, &bl, &a );
        hb_storni( r, 2 );
        hb_storni( g, 3 );
        hb_storni( bl, 4 );
        hb_storni( a, 5 );
    }
}

//_UI_EXTERN void uiColorButtonSetColor(uiColorButton *b, double r, double g, double bl, double a);
HB_FUNC( UICOLORBUTTONSETCOLOR ) {
    uiColorButton *b = hb_parptr( 1 );
    if( b ) {
        uiColorButtonSetColor( b, hb_parnd( 2 ), hb_parnd( 3 ), hb_parnd( 4 ), hb_parnd( 5 ) );
    }
}

//_UI_EXTERN void uiColorButtonOnChanged(uiColorButton *b, void (*f)(uiColorButton *, void *), void *data);

//_UI_EXTERN uiColorButton *uiNewColorButton(void);
HB_FUNC( UINEWCOLORBUTTON ) {
    hb_retptr( uiNewColorButton() );
}
