#include "ParkingMeter.h"

ParkingMeter::ParkingMeter(int minutes) {
	minutesPurchased = minutes;
}

int ParkingMeter::getMinutesPurchased() const {
	return minutesPurchased;
}