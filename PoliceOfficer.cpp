#include "PoliceOfficer.h"
#include "ParkingTicket.h"

PoliceOfficer::PoliceOfficer(string nm, string bn) {
	name = nm;
	badgeNumber = bn;
}

ParkingTicket* PoliceOfficer::patrol(const ParkedCar& car, const ParkingMeter& meter) const {
	int minutesParked = car.getMinutesParked();
	int minutesPurchased = meter.getMinutesPurchased();
	if (minutesParked > minutesPurchased) {
		return new ParkingTicket(car, meter, *this);
	}
	else {
		return nullptr;
	}
}

string PoliceOfficer::getName() const {
	return name;
}

string PoliceOfficer::getBadgeNumber() const {
	return badgeNumber;
}