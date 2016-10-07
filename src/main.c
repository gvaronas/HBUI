
#include "hbapi.h"
#include "ui.h"

HB_FUNC( UIINIT ) {
	uiInitOptions options;
	const char *err;

	memset(&options, 0, sizeof (uiInitOptions));
	err = uiInit(&options);

    if (err != NULL) {
		fprintf(stderr, "error initializing libui: %s", err);
		uiFreeInitError(err);
		hb_retl( HB_FALSE );
	}
    else
		hb_retl( HB_TRUE );
}

HB_FUNC( UIMAIN ) {
    uiMain();
}
