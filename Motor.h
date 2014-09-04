#ifndef MOTOR_H_
#define MOTOR_H_

#include "ControlSignalSender.h"

// Custom motor controller

class Motor : public ControlSignalSender {
	uint32 startDutyNs;
public:
	Motor(PWM* pwm, PWM::Polarity polarity = PWM::POLARITY_HIGH, 
		uint32 periodNs = 20000000, uint32 startDutyNs = 1150000, 
		uint32 minDutyNs = 1000000, uint32 maxDutyNs = 2000000);
	~Motor();
	
	virtual void setStartDuty(uint32 startDutyNs);
	
	virtual void setPercent(double value);
	virtual double getPercent();
	
	virtual void start();
	virtual void stop();
	virtual bool isRunning();
	
};



#endif