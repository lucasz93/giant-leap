/*
===============================================================================

	Giant Leap

	File	:	Controller.cpp
	Authors	:	Lucas Zadrozny
	Date	:	5th September 2014

	Purpose	:	Implements the Giant Leap version of the `Controller` Leap SDK class.

===============================================================================
*/

#include "Common.h"

#include "GiantLeap.h"
#include "ControllerImplementation.h"
#include "SharedObject.h"
using namespace GiantLeap;

#include "MemDebugOn.h"

void null_printf( const char *fmt, ... )
{
}

outfunc_t GiantLeap::Con_Printf = null_printf;

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Controller::Controller( ControllerImplementation *ref ) : Interface( ref, ref )
{
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Controller::Controller() : Interface( new ControllerImplementation(*this), this )
{
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Controller::~Controller()
{
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool Controller::isConnected() const
{
	return get<ControllerImplementation>()->isConnected();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool Controller::isServiceConnected() const
{
	return get<ControllerImplementation>()->isServiceConnected();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool Controller::hasFocus() const
{
	return get<ControllerImplementation>()->hasFocus();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Controller::PolicyFlag Controller::policyFlags() const
{
	return get<ControllerImplementation>()->policyFlags();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT void Controller::setPolicyFlags( PolicyFlag flags ) const
{
	get<ControllerImplementation>()->setPolicyFlags( flags );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool Controller::addListener( Listener &listener )
{
	return get<ControllerImplementation>()->addListener( listener );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool Controller::removeListener( Listener &listener )
{
	return get<ControllerImplementation>()->removeListener( listener );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Frame Controller::frame( int history ) const
{
	return get<ControllerImplementation>()->frame( history );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT void Controller::enableGesture( Gesture::Type type, bool enable /*= true*/ ) const
{
	get<ControllerImplementation>()->enableGesture( type, enable );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool Controller::isGestureEnabled( Gesture::Type type ) const
{
	return get<ControllerImplementation>()->isGestureEnabled( type );
}