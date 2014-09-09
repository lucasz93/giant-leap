/*
===============================================================================

	Giant Leap

	File	:	GestureImplementation.cpp
	Authors	:	Lucas Zadrozny
	Date	:	9th September 2014

	Purpose	:	Implements the actual logic behind the `Gesture` class.

===============================================================================
*/

#include "Common.h"

#include "Leap.h"
#include "GestureImplementation.h"
using namespace Leap;

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
GestureImplementation::GestureImplementation()
{
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
int32_t GestureImplementation::id() const
{
	return 0;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Gesture::Type GestureImplementation::type() const
{
	return Gesture::Type::TYPE_INVALID;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Gesture::State GestureImplementation::state() const
{
	breakpoint();
	return Gesture::State::STATE_INVALID;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
int64_t GestureImplementation::duration() const
{
	return 0;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
float GestureImplementation::durationSeconds() const
{
	return 0.0f;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Frame GestureImplementation::frame() const
{
	breakpoint();
	return Frame::invalid();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
HandList GestureImplementation::hands() const
{
	breakpoint();
	return HandList();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
PointableList GestureImplementation::pointables() const
{
	breakpoint();
	return PointableList();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
const char *GestureImplementation::toCString() const
{
	breakpoint();
	return "";
}