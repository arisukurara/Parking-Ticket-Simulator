#pragma once
#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
class ParkingTicket;

using namespace std;

class PoliceOfficer {
private:
    string name;
    string badgeNumber;

public:
    PoliceOfficer(string nm = "NAME", string bn = "BADGENUMBER");

    ParkingTicket* patrol(const ParkedCar& car, const ParkingMeter& meter) const;

    string getName() const;
    string getBadgeNumber() const;
};
