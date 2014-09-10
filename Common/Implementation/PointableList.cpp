/*
===============================================================================

	Giant Leap

	File	:	PointableList.cpp
	Authors	:	Lucas Zadrozny
	Date	:	10th September 2014

	Purpose	:	Implements the Giant Leap version of the `GestureList` Leap SDK class.

===============================================================================
*/

#include "Common.h"

#include "Leap.h"
#include "ListBaseImplementation.h"
#include "SharedObject.h"
using namespace Leap;

typedef ListBaseImplementation<Pointable> ListType_t;

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT PointableList::PointableList() : Interface( (SharedObject *)NULL )
{
	
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
PointableList::PointableList( const ListType_t &list ) : Interface( (Interface::Implementation *)&list, this )
{

}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT int PointableList::count() const
{
	return get<ListType_t>()->count();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool PointableList::isEmpty() const
{
	return get<ListType_t>()->isEmpty();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Pointable PointableList::operator[](int index) const
{
	return (*get<ListType_t>())[index];
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT PointableList &PointableList::append( const PointableList &other )
{
	get<ListType_t>()->append( *other.get<ListType_t>() );
	return *this;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT PointableList &PointableList::append( const FingerList &other )
{
	breakpoint();
	return *this;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT PointableList &PointableList::append( const ToolList &other )
{
	breakpoint();
	return *this;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Pointable PointableList::leftmost() const
{
	breakpoint();
	return Pointable();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Pointable PointableList::rightmost() const
{
	breakpoint();
	return Pointable();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Pointable PointableList::frontmost() const
{
	breakpoint();
	return Pointable();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT PointableList &PointableList::extended()
{
	breakpoint();
	return *this;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT PointableList::const_iterator PointableList::begin() const
{
	breakpoint();
	return const_iterator( *this, 0 );
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT PointableList::const_iterator PointableList::end() const
{
	breakpoint();
	return const_iterator( *this, count() );
}