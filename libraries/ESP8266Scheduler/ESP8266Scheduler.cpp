#include "ESP8266Scheduler.h"

static void startLoopHelper(void *arg) {
	reinterpret_cast<SchedulerTask>(arg)();
}

void SchedulerClass::startLoop(SchedulerTask task, uint32_t stackSize) {
	spawn(startLoopHelper, reinterpret_cast<void*>(task), stackSize);
}

SchedulerClass Scheduler;
