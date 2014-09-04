#ifndef CONTROLSIGNALSENDER_H_
#define CONTROLSIGNALSENDER_H_

#include "Device.h"
#include "PWM.h"

// Unsigned control signal sender

class ControlSignalSender : public Device {
	PWM* pwm;
	uint32 minDutyNs, maxDutyNs;
public:
	ControlSignalSender(PWM* pwm, PWM::Polarity polarity = PWM::POLARITY_HIGH, 
		uint32 periodNs = 20000000, uint32 minDutyNs = 1000000, uint32 maxDutyNs = 2000000);
	~ControlSignalSender();
	
	// Device
	virtual void setEnabled(bool value);
	virtual bool isEnabled();

	virtual void setMinMaxDuty(uint32 minDutyNs, uint32 maxDutyNs);
	
	/*
		Input value range - [0..100]
	*/
	virtual void setPercent(double value);
	virtual double getPercent();
	
};



#endif