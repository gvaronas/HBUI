
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN void uiBoxAppend(uiBox *b, uiControl *child, int stretchy);
HB_FUNC( UIBOXAPPEND ) {
    void *b = hb_parptr( 1 );
    void *child = hb_parptr( 2 );
    if( b && child ) {
        uiBoxAppend( uiBox( b ), uiControl( child ), hb_parni( 3 ) );
    }
}

//_UI_EXTERN void uiBoxDelete(uiBox *b, int index);
HB_FUNC( UIBOXDELETE ) {
    void *b = hb_parptr( 1 );
    if( b ) {
        uiBoxDelete( uiBox( b ), hb_parni( 2 ) );
    }
}

//_UI_EXTERN int uiBoxPadded(uiBox *b);
HB_FUNC( UIBOXPADDED ) {
    void *b = hb_parptr( 1 );
    if( b ) {
        hb_retni( uiBoxPadded( uiBox( b ) ) );
    }
}

//_UI_EXTERN void uiBoxSetPadded(uiBox *b, int padded);
HB_FUNC( UIBOXSETPADDED ) {
    void *b = hb_parptr( 1 );
    if( b ) {
        uiBoxSetPadded( uiBox( b ), hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiBox *uiNewHorizontalBox(void);
HB_FUNC( UINEWHORIZONTALBOX ) {
    hb_retptr( uiNewHorizontalBox() );
}

//_UI_EXTERN uiBox *uiNewVerticalBox(void);
HB_FUNC( UINEWVERTICALBOX ) {
    hb_retptr( uiNewVerticalBox() );
}
