
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN void uiEditableComboboxAppend(uiEditableCombobox *c, const char *text);
HB_FUNC( UIEDITABLECOMBOBOXAPPEND ) {
    uiEditableCombobox *c = hb_parptr( 1 );
    if( c ) {
        uiEditableComboboxAppend( c, hb_parc( 2 ) );
    }
}

//_UI_EXTERN char *uiEditableComboboxText(uiEditableCombobox *c);
HB_FUNC( UIEDITABLECOMBOBOXTEXT ) {
    uiEditableCombobox *c = hb_parptr( 1 );
    if( c ) {
        hb_retc( uiEditableComboboxText( c ) );
    }
}

//_UI_EXTERN void uiEditableComboboxSetText(uiEditableCombobox *c, const char *text);
HB_FUNC( UIEDITABLECOMBOBOXSETTEXT ) {
    uiEditableCombobox *c = hb_parptr( 1 );
    if( c ) {
        uiEditableComboboxSetText( c, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiEditableComboboxOnChanged(uiEditableCombobox *c, void (*f)(uiEditableCombobox *c, void *data), void *data);

//_UI_EXTERN uiEditableCombobox *uiNewEditableCombobox(void);
HB_FUNC( UINEWEDITABLECOMBOBOX ) {
    hb_retptr( uiNewEditableCombobox() );
}
