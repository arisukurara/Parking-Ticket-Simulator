#pragma once
#include <string>
using namespace std;

class ParkedCar {
private:
    string make;
    string model;
    string color;
    string licenseNumber;
    int minutesParked;

public:
    ParkedCar(string mk = "MAKE", string ml = "MODEL", string co = "COLOR", string ln = "LICENSE", int mn = 0);

    string getMake() const;
    string getModel() const;
    string getColor() const;
    string getLicenseNumber() const;
    int getMinutesParked() const;
};