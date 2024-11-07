#include <iostream>
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"

using namespace std;

int main() {
    struct TestData {
        int minutesPurchased;
        int minutesParked;
    } testCases[] = {
        {60, 45},  // No parking violation.
        {60, 65},  // $25 fine
        {60, 120}, // $25 fine
        {60, 150}, // $35 fine
        {60, 180}, // $35 fine
        {60, 200}, // $45 fine
        {60, 240}, // $45 fine
        {60, 300}, // $55 fine
        {60, 350}  // $55 fine
    };

    PoliceOfficer officer("Victor Wembanyama", "SPURS73");

    for (const auto& test : testCases) {
        cout << "\n--- Test Case ---\n";
        cout << "Minutes Purchased: " << test.minutesPurchased << endl;
        cout << "Minutes Parked: " << test.minutesParked << endl;

        ParkedCar car("Honda", "Civic", "White", "BKNETS", test.minutesParked);
        ParkingMeter meter(test.minutesPurchased);

        ParkingTicket* ticket = officer.patrol(car, meter);

        if (ticket) {
            ticket->printTicket();
            delete ticket;
        }
        else {
            cout << "No parking violation.\n";
        }
    }

}
