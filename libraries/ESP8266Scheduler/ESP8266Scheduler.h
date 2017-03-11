#pragma once

#include <Arduino.h>

extern "C" {
	typedef void (*SchedulerTask)(void);
}

class SchedulerClass {
public:
	static void startLoop(SchedulerTask task, uint32_t stackSize = 1024);
};

extern SchedulerClass Scheduler;
