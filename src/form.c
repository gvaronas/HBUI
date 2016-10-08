
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN void uiFormAppend(uiForm *f, const char *label, uiControl *c, int stretchy);
HB_FUNC( UIFORMAPPEND ) {
    uiForm *f = hb_parptr( 1 );
    if( f ) {
        uiFormAppend( f, hb_parc( 2 ), uiControl( hb_parptr( 3 ) ), hb_parni( 4 ) );
    }
}

//_UI_EXTERN void uiFormDelete(uiForm *f, int index);
HB_FUNC( UIFORMDELETE ) {
    uiForm *f = hb_parptr( 1 );
    if( f ) {
        uiFormDelete( f, hb_parni( 2 ) );
    }
}

//_UI_EXTERN int uiFormPadded(uiForm *f);
HB_FUNC( UIFORMPADDED ) {
    uiForm *f = hb_parptr( 1 );
    if( f ) {
        hb_retni( uiFormPadded( f ) );
    }
}

//_UI_EXTERN void uiFormSetPadded(uiForm *f, int padded);
HB_FUNC( UIFORMSETPADDED ) {
    uiForm *f = hb_parptr( 1 );
    if( f ) {
        uiFormSetPadded( f, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiForm *uiNewForm(void);
HB_FUNC( UINEWFORM ) {
    hb_retptr( uiNewForm() );
}
