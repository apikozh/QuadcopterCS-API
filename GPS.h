#ifndef GPS_H_
#define GPS_H_

#include "Device.h"

// GPS

/*abstract*/ struct GPS : virtual Device {
	
	/*
		Out params value unit - degrees
	*/	
	virtual double getLatitude() = 0;
	virtual double getLongitude() = 0;

	/*
		Out params value unit - meters (from Earth's sea level)
	*/
	virtual double getAltitude() = 0;

	//virtual void getGeographicCoordinates(double& lat, double& lon, double& alt) = 0;
	
	virtual double getHorizontalPositionPrecision() = 0;
	virtual double getVerticalPositionPrecision() = 0;
	
};

#endif