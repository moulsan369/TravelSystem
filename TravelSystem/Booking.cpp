#include "Booking.h"
#include <iostream>

using namespace std;

Booking::Booking(const Destination& destination, int numCostomer, const string& travelDate)
    : destination(destination), numCostomer(numCostomer), travelDate(travelDate) {}

void Booking::displayBookingInfo() const {
    cout << "dat cho cho " << numCostomer << " khach hang "
        << destination.getName() << " vao " << travelDate << endl;
}
