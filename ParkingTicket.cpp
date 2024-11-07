#include "ParkingTicket.h"
#include <iostream>

void ParkingTicket::calculateFine() {
    int minutesOver = car.getMinutesParked() - meter.getMinutesPurchased();
    if (minutesOver <= 60) {
        fine = 25;
    }
    else {
        fine = 25 + ((minutesOver - 60) / 60 + 1) * 10;
    }
}

ParkingTicket::ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o)
    : car(c), meter(m), officer(o), fine(0) {
    calculateFine();
}

void ParkingTicket::printTicket() const {
    std::cout << "*** Parking Ticket ***" << std::endl;
    std::cout << "Officer " << officer.getName() << " Badge Number: " << officer.getBadgeNumber() << std::endl;
    std::cout << "Vehicle License Number: " << car.getLicenseNumber() << std::endl;
    std::cout << "Make: " << car.getMake() << " Model: " << car.getModel() << " Color: " << car.getColor() << std::endl;
    std::cout << "Meter Minutes: " << meter.getMinutesPurchased() << " Minutes Parked: " << car.getMinutesParked() << std::endl;
    std::cout << "Parking Fee: $" << fine << std::endl;
}
