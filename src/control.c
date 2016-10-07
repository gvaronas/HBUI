
#include "hbapi.h"
#include "ui.h"

HB_FUNC( UICONTROLDESTROY ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        uiControlDestroy( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLHANDLE ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        hb_retnl( uiControlHandle( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLPARENT ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        hb_retptr( uiControlParent( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLSETPARENT ) {
    void *c = hb_parptr( 1 );
    void *parent = hb_parptr( 2 );

    if( c ) {
        uiControlSetParent( uiControl( c ), uiControl( parent ) );
    }
}

HB_FUNC( UICONTROLTOPLEVEL ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        hb_retni( uiControlToplevel( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLVISIBLE ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        hb_retni( uiControlVisible( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLSHOW ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        uiControlShow( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLHIDE ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        uiControlHide( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLENABLED ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        hb_retni( uiControlEnabled( uiControl( c ) ) );
    }
}

HB_FUNC( UICONTROLENABLE ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        uiControlEnable( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLDISABLE ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        uiControlDisable( uiControl( c ) );
    }
}

//uiControl *uiAllocControl(size_t size, uint32_t OSsig, uint32_t typesig, const char *typenamestr)
//{
//	uiControl *c;
//
//	c = (uiControl *) uiAlloc(size, typenamestr);
//	c->Signature = uiControlSignature;
//	c->OSSignature = OSsig;
//	c->TypeSignature = typesig;
//	return c;
//}

HB_FUNC( UIFREECONTROL ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        uiFreeControl( uiControl( c ) );
    }
}

HB_FUNC( UICONTROLVERIFYSETPARENT ) {
    void *c = hb_parptr( 1 );
    void *parent = hb_parptr( 2 );

    if( c ) {
        uiControlVerifySetParent( uiControl( c ), uiControl( parent ) );
    }
}

HB_FUNC( UICONTROLENABLEDTOUSER ) {
    void *c = hb_parptr( 1 );

    if( c ) {
        hb_retni( uiControlEnabledToUser( uiControl( c ) ) );
    }
}
