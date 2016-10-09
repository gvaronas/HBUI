
#include "hbapi.h"
#include "ui.h"

//_UI_EXTERN uiDateTimePicker *uiNewDateTimePicker(void);
HB_FUNC( UINEWDATETIMEPICKER ) {
    hb_retptr( uiNewDateTimePicker() );
}

//_UI_EXTERN uiDateTimePicker *uiNewDatePicker(void);
HB_FUNC( UINEWDATEPICKER ) {
    hb_retptr( uiNewDatePicker() );
}

//_UI_EXTERN uiDateTimePicker *uiNewTimePicker(void);
HB_FUNC( UINEWTIMEPICKER ) {
    hb_retptr( uiNewTimePicker() );
}
