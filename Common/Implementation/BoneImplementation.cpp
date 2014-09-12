/*
===============================================================================

	Giant Leap

	File	:	BoneImplementation.cpp
	Authors	:	Gareth Woodorth
	Date	:   9th September 2014

	Purpose	:	Implements the Giant Leap version of the `BoneImplementation` Leap SDK class.

===============================================================================
*/

#include "Common.h"

#include "GiantLeap.h"
#include "BoneImplementation.h"

using namespace GiantLeap;

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
BoneImplementation::BoneImplementation()
{

}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Leap::Vector BoneImplementation::prevJoint() const
{
	return Leap::Vector(0, 0, 0);
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Leap::Vector BoneImplementation::nextJoint() const
{
	return Leap::Vector(0, 0, 0);
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Leap::Vector BoneImplementation::center() const
{
	breakpoint();
	return Leap::Vector(0, 0, 0);
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Leap::Vector BoneImplementation::direction() const
{
	breakpoint();
	return Leap::Vector(0, 0, 0);
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
float BoneImplementation::length() const
{
	breakpoint();
	return 0;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
float BoneImplementation::width() const
{
	breakpoint();
	return 0;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Bone::Type BoneImplementation::type() const
{
	Bone::Type type = Bone::TYPE_METACARPAL;
	return type;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Leap::Matrix BoneImplementation::basis() const
{
	breakpoint();
	return Leap::Matrix();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
bool BoneImplementation::isValid() const
{
	return true;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
const Bone& BoneImplementation::invalid()
{
	 static Bone invalid(NULL);
	 return invalid;
}
 
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
bool BoneImplementation::operator==(const Bone& b) const
{
	return true;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
bool BoneImplementation::operator!=(const Bone& b) const
{
	return true;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
const char* BoneImplementation::toCString() const
{
	breakpoint();
	return "";
}