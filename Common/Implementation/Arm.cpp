/*
===============================================================================

	Giant Leap

	File	:	Arm.cpp
	Authors	:	Gareth Woodorth
	Date	:   9th September 2014

	Purpose	:	Implements the Giant Leap version of the `Arm` Leap SDK class.

===============================================================================
*/


#include "GiantLeap.h"
#include "ArmImplementation.h"
#include "SharedObject.h"

using namespace GiantLeap;

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
Arm::Arm(ArmImplementation *ref) : Interface(ref, this)
{

}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Arm::Arm() : Interface((SharedObject *)NULL)
{
	
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT float Arm::width() const
{
	return isValid() ? get<ArmImplementation>()->width() : 0.0f;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Leap::Vector Arm::direction() const
{
	return isValid() ? get<ArmImplementation>()->direction() : Leap::Vector();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Leap::Matrix Arm::basis() const
{
	return isValid() ? get<ArmImplementation>()->basis() : Leap::Matrix::identity();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Leap::Vector Arm::elbowPosition() const
{
	return isValid() ? get<ArmImplementation>()->elbowPosition() : Leap::Vector();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT Leap::Vector Arm::wristPosition() const
{
	return isValid() ? get<ArmImplementation>()->wristPosition() : Leap::Vector();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool Arm::isValid() const
{
	return get<ArmImplementation>()->isValid();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT const Arm& Arm::invalid()
{
	static Arm invalid(NULL);
	return invalid;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool Arm::operator==(const Arm& other) const
{
	return get<ArmImplementation>() == other.get<ArmImplementation>();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT bool Arm::operator!=(const Arm& other) const
{
	return get<ArmImplementation>() != other.get<ArmImplementation>();
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT std::ostream& operator<<(std::ostream& out, const Arm& a)
{
	out << a.toString();
	return out;
}

//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
LEAP_EXPORT const char* Arm::toCString() const
{
	return isValid() ? get<ArmImplementation>()->toCString() : "";
}

