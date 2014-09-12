/*
===============================================================================

	Giant Leap

	File	:	TapGestureImplementation.h
	Authors	:	Lucas Zadrozny
	Date	:	10th September 2014

	Purpose	:	Implements the actual logic behind the `TapGesture` class.

===============================================================================
*/

#include "Common.h"

#include "GiantLeap.h"
#include "TapGestureImplementation.h"
#include "SharedObject.h"
using namespace GiantLeap;

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
TapGestureImplementation::TapGestureImplementation()
{
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Leap::Vector TapGestureImplementation::position() const
{
	return Leap::Vector();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Leap::Vector TapGestureImplementation::direction() const
{
	return Leap::Vector();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
float TapGestureImplementation::progress() const
{
	breakpoint();
	return 0.0f;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Pointable TapGestureImplementation::pointable() const
{
	breakpoint();
	return Pointable();
}