
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN char *uiEntryText(uiEntry *e);
HB_FUNC( UIENTRYTEXT ) {
    uiEntry *e = hb_parptr( 1 );
    if( e ) {
        hb_retc( uiEntryText( e ) );
    }
}

//_UI_EXTERN void uiEntrySetText(uiEntry *e, const char *text);
HB_FUNC( UIENTRYSETTEXT ) {
    uiEntry *e = hb_parptr( 1 );
    if( e ) {
        uiEntrySetText( e, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiEntryOnChanged(uiEntry *e, void (*f)(uiEntry *e, void *data), void *data);

//_UI_EXTERN int uiEntryReadOnly(uiEntry *e);
HB_FUNC( UIENTRYREADONLY ) {
    uiEntry *e = hb_parptr( 1 );
    if( e ) {
        hb_retni( uiEntryReadOnly( e ) );
    }
}

//_UI_EXTERN void uiEntrySetReadOnly(uiEntry *e, int readonly);
HB_FUNC( UIENTRYSETREADONLY ) {
    uiEntry *e = hb_parptr( 1 );
    if( e ) {
        uiEntrySetReadOnly( e, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiEntry *uiNewEntry(void);
HB_FUNC( UINEWENTRY ) {
    hb_retptr( uiNewEntry() );
}

//_UI_EXTERN uiEntry *uiNewPasswordEntry(void);
HB_FUNC( UINEWPASSWORDENTRY ) {
    hb_retptr( uiNewPasswordEntry() );
}

//_UI_EXTERN uiEntry *uiNewSearchEntry(void);
HB_FUNC( UINEWSEARCHENTRY ) {
    hb_retptr( uiNewSearchEntry() );
}
