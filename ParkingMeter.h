#pragma once
#include <iostream>
using namespace std;

class ParkingMeter
{
private:
    int minutesPurchased;

public:
    ParkingMeter(int minutes = 0);

    int getMinutesPurchased() const;
};