#include <ESP8266Scheduler.h>

static void blinkLoop() {
	digitalWrite(LED_BUILTIN, HIGH);
	delay(1000);
	digitalWrite(LED_BUILTIN, LOW);
	delay(1000);
}

void setup() {
	pinMode(LED_BUILTIN, OUTPUT);
	Serial.begin(115200);
	Scheduler.startLoop(blinkLoop);
}

void loop() {
	Serial.println("Hello");
	delay(1000);
}
