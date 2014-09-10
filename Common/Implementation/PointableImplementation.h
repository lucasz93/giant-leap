/*
===============================================================================

	Giant Leap

	File	:	PointableImplementation.h
	Authors	:	Lucas Zadrozny
	Date	:	10th September 2014

	Purpose	:	Implements the real logic behind the `Pointable` class.

===============================================================================
*/

#ifndef __POINTABLEIMPLEMENTATION_H__
#define __POINTABLEIMPLEMENTATION_H__

namespace Leap
{

	//-------------------------------------------------------------------------
	// Contains the "real" data for the Leap `Pointable` class.
	//-------------------------------------------------------------------------
	class PointableImplementation : public Interface::Implementation
	{
	public:
		PointableImplementation();

		int32_t				id() const;
		Frame				frame() const;
		Hand				hand() const;
		Vector				tipPosition() const;
		Vector				stabilizedTipPosition() const;
		Vector				tipVelocity() const;
		Vector				direction() const;
		float				width() const;
		float				length() const;
		float				timeVisible() const;

		bool				isFinger() const;
		bool				isTool() const;
		bool				isExtended() const;

		Pointable::Zone		touchZone() const;
		float				touchDistance() const;

		const char *		toCString() const;
	};

}

#endif // __POINTABLEIMPLEMENTATION_H__