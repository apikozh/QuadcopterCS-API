#ifndef SCONTROLSIGNALSENDER_H_
#define SCONTROLSIGNALSENDER_H_

#include "ControlSignalSender.h"

// Signed control signal sender

class SControlSignalSender : public ControlSignalSender {
	uint32 midDutyNs;
public:
	SControlSignalSender(PWM* pwm, PWM::Polarity polarity = PWM::POLARITY_HIGH, uint32 periodNs = 20000000, 
						uint32 minDutyNs = 1000000, uint32 maxDutyNs = 2000000, uint32 midDutyNs = 1500000);
	~SControlSignalSender();
	
	virtual void setMidDuty(uint32 midDutyNs);
	
	/*
		Input value range - [-100..100]
	*/
	virtual void setPercent(double value);
	virtual double getPercent();
	
};



#endif