/*
===============================================================================

Giant Leap

File	:	ArmImplementation.cpp
Authors	:	Gareth Woodorth
Date	:   9th September 2014

Purpose	:	Implements the Giant Leap version of the `ArmImplementation` Leap SDK class.

===============================================================================
*/

#include "Common.h"

#include "Leap.h"
#include "ArmImplementation.h"

using namespace Leap;

ArmImplementation::ArmImplementation()
{
	
}

float ArmImplementation::width() const
{
	return 0;
}

Vector ArmImplementation::direction() const
{
	return Vector(0, 0, 0);
}

Matrix ArmImplementation::basis() const
{
	breakpoint();
	return Matrix();
}

Vector ArmImplementation::elbowPosition() const
{
	return Vector(0,0,0);
}

Vector ArmImplementation::wristPosition() const
{
	return Vector(0, 0, 0);
}

bool ArmImplementation::isValid() const
{
	return true;
}

const Arm& ArmImplementation::invalid()
{
	static Arm invalid(NULL);
	return invalid;
}

bool ArmImplementation::operator==(const Arm& other) const
{
	return true;
}

bool ArmImplementation::operator!=(const Arm& other) const
{
	return true;
}

const char* ArmImplementation::toCString() const
{
	breakpoint();
	return "";
}