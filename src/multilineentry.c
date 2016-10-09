
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN char *uiMultilineEntryText(uiMultilineEntry *e);
HB_FUNC( UIMULTILINEENTRYTEXT ) {
    uiMultilineEntry *e = hb_parptr( 1 );
    if( e ) {
        hb_retc( uiMultilineEntryText( e ) );
    }
}

//_UI_EXTERN void uiMultilineEntrySetText(uiMultilineEntry *e, const char *text);
HB_FUNC( UIMULTILINEENTRYSETTEXT ) {
    uiMultilineEntry *e = hb_parptr( 1 );
    if( e ) {
        uiMultilineEntrySetText( e, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiMultilineEntryAppend(uiMultilineEntry *e, const char *text);
HB_FUNC( UIMULTILINEENTRYAPPEND ) {
    uiMultilineEntry *e = hb_parptr( 1 );
    if( e ) {
        uiMultilineEntryAppend( e, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiMultilineEntryOnChanged(uiMultilineEntry *e, void (*f)(uiMultilineEntry *e, void *data), void *data);

//_UI_EXTERN int uiMultilineEntryReadOnly(uiMultilineEntry *e);
HB_FUNC( UIMULTILINEENTRYREADONLY ) {
    uiMultilineEntry *e = hb_parptr( 1 );
    if( e ) {
        hb_retni( uiMultilineEntryReadOnly( e ) );
    }
}

//_UI_EXTERN void uiMultilineEntrySetReadOnly(uiMultilineEntry *e, int readonly);
HB_FUNC( UIMULTILINEENTRYSETREADONLY ) {
    uiMultilineEntry *e = hb_parptr( 1 );
    if( e ) {
        uiMultilineEntrySetReadOnly( e, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiMultilineEntry *uiNewMultilineEntry(void);
HB_FUNC( UINEWMULTILINEENTRY ) {
    hb_retptr( uiNewMultilineEntry() );
}

//_UI_EXTERN uiMultilineEntry *uiNewNonWrappingMultilineEntry(void);
HB_FUNC( UINEWNONWRAPPINGMULTILINEENTRY ) {
    hb_retptr( uiNewNonWrappingMultilineEntry() );
}
