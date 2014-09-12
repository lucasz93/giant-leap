/*
===============================================================================

	Giant Leap

	File	:	TapGestureImplementation.h
	Authors	:	Lucas Zadrozny
	Date	:	10th September 2014

	Purpose	:	Implements the actual logic behind the `KeyTapGesture` class.

===============================================================================
*/

#ifndef __TAPGESTUREIMPLEMENTATION_H__
#define __TAPGESTUREIMPLEMENTATION_H__

#include "GestureImplementation.h"

namespace GiantLeap
{

	//-------------------------------------------------------------------------
	// Contains the "real" data for the Leap `TapGesture` class.
	//-------------------------------------------------------------------------
	class TapGestureImplementation : public GestureImplementation
	{
	public:
		TapGestureImplementation();
		
		Leap::Vector				position() const;
		Leap::Vector				direction() const;
		float				progress() const;
		Pointable			pointable() const;
	};

}

#endif // __TAPGESTUREIMPLEMENTATION_H__