#pragma once

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"

class ParkingTicket {
private:
    ParkedCar car;
    ParkingMeter meter;
    PoliceOfficer officer;
    int fine;

    void calculateFine();

public:
    ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o);

    void printTicket() const;
};
