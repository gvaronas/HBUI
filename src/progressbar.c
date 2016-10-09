
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN int uiProgressBarValue(uiProgressBar *p);
HB_FUNC( UIPROGRESSBARVALUE ) {
    uiProgressBar *p = hb_parptr( 1 );
    if( p ) {
        hb_retni( uiProgressBarValue( p ) );
    }
}

//_UI_EXTERN void uiProgressBarSetValue(uiProgressBar *p, int n);
HB_FUNC( UIPROGRESSBARSETVALUE ) {
    uiProgressBar *p = hb_parptr( 1 );
    if( p ) {
        uiProgressBarSetValue( p, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiProgressBar *uiNewProgressBar(void);
HB_FUNC( UINEWPROGRESSBAR ) {
    hb_retptr( uiNewProgressBar() );
}
