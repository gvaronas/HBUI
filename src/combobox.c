
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN void uiComboboxAppend(uiCombobox *c, const char *text);
HB_FUNC( UICOMBOBOXAPPEND ) {
    uiCombobox *c = hb_parptr( 1 );
    if( c ) {
        uiComboboxAppend( c, hb_parc( 2 ) );
    }
}

//_UI_EXTERN int uiComboboxSelected(uiCombobox *c);
HB_FUNC( UICOMBOBOXSELECTED ) {
    uiCombobox *c = hb_parptr( 1 );
    if( c ) {
        hb_retni( uiComboboxSelected( c ) );
    }
}

//_UI_EXTERN void uiComboboxSetSelected(uiCombobox *c, int n);
HB_FUNC( UICOMBOBOXSETSELECTED ) {
    uiCombobox *c = hb_parptr( 1 );
    if( c ) {
        uiComboboxSetSelected( c, hb_parni( 2 ) );
    }
}

//_UI_EXTERN void uiComboboxOnSelected(uiCombobox *c, void (*f)(uiCombobox *c, void *data), void *data);

//_UI_EXTERN uiCombobox *uiNewCombobox(void);
HB_FUNC( UINEWCOMBOBOX ) {
    hb_retptr( uiNewCombobox() );
}
