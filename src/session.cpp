//------------------------------------------------------------------------------
//  Home Office
//  Nürnberg, Germany
//  E-Mail: sergej1@email.ua
//
//  Copyright (C) 2020 free Project SynchroTime. All rights reserved.
//------------------------------------------------------------------------------
//  Project SynchroTime: Time synchronization via Serial Port (UART)
//
//
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Includes
//------------------------------------------------------------------------------
#include "session.h"

//! \brief
//!
//! \details
//!
Session::Session( QObject *parent )
    : QObject( parent )
{

}

//! \brief
//!
//! \details
//!
Session::Session( QObject *parent, Interface *const interface )
    : QObject( parent )
    , interface( interface )
{
    if ( this->interface != nullptr )
    {
        this->interface->setParent( this );
    }
}

//! \brief
//!
//! \details
//!
Interface *Session::getInterface( void )
{
    return this->interface;
}

//! \brief
//!
//! \details
//!
void Session::setInterface( Interface *const interface )
{
    this->interface = interface;
}
