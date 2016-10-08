
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN uiSeparator *uiNewHorizontalSeparator(void);
HB_FUNC( UINEWHORIZONTALSEPARATOR ) {
    hb_retptr( uiNewHorizontalSeparator() );
}

//_UI_EXTERN uiSeparator *uiNewVerticalSeparator(void);
HB_FUNC( UINEWVERTICALSEPARATOR ) {
    hb_retptr( uiNewVerticalSeparator() );
}
