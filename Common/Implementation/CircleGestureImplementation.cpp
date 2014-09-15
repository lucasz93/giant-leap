/*
===============================================================================

	Giant Leap

	File	:	CircleGestureImplementation.cpp
	Authors	:	Lucas Zadrozny
	Date	:	10th September 2014

	Purpose	:	Implements the actual logic behind the `CircleGesture` class.

===============================================================================
*/

#include "Common.h"

#include "GiantLeap.h"
#include "CircleGestureImplementation.h"
#include "FrameImplementation.h"
using namespace GiantLeap;

#include "MemDebugOn.h"

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
CircleGestureImplementation::CircleGestureImplementation( FrameImplementation &frame ) :
	GestureImplementation( frame )
{
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
CircleGestureImplementation::CircleGestureImplementation( FrameImplementation &frame, const Leap::CircleGesture &circle ) :
	GestureImplementation( frame, circle )
{
	FromLeap( circle );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void CircleGestureImplementation::FromLeap( const Leap::CircleGesture &circle )
{
	_pointableId = circle.pointable().id();
	_center = circle.center();
	_normal = circle.normal();
	_progress = circle.progress();
	_radius = circle.radius();

	GestureImplementation::FromLeap( circle );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
bool CircleGestureImplementation::Serialize( BufferWrite *buffer )
{
	buffer->WriteInt( 'crcl' );

	buffer->WriteInt( _pointableId );
	buffer->WriteVector( _center );
	buffer->WriteVector( _normal );
	buffer->WriteFloat( _progress );
	buffer->WriteFloat( _radius );

	return GestureImplementation::Serialize( buffer );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
bool CircleGestureImplementation::Unserialize( BufferRead *buffer )
{
	if( buffer->ReadInt() != 'crcl' )
	{
		std::cout << "Expected 'crcl', got junk." << std::endl;
		return false;
	}

	_pointableId = buffer->ReadInt();
	_center = buffer->ReadVector();
	_normal = buffer->ReadVector();
	_progress = buffer->ReadFloat();
	_radius = buffer->ReadFloat();

	return GestureImplementation::Unserialize( buffer );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void CircleGestureImplementation::Translate( const Vector &v )
{
	GestureImplementation::Translate( v );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
void CircleGestureImplementation::Rotate( const Vector &v )
{
	GestureImplementation::Rotate( v );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Vector CircleGestureImplementation::center() const
{
	return _center;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Vector CircleGestureImplementation::normal() const
{
	return _normal;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
float CircleGestureImplementation::progress() const
{
	return _progress;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
float CircleGestureImplementation::radius() const
{
	return _radius;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Pointable CircleGestureImplementation::pointable() const
{
	return _frame.pointable( _pointableId );
}