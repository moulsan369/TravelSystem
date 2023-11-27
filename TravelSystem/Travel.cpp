#include "Travel.h"
#include <iostream>

using namespace std;

void Travel::addDestination(const Destination& destination) {
    destinations.push_back(destination);
}

void Travel::displayDestinations() const {
    cout << "dia diem hien tai:" << endl;
    for (const auto& destination : destinations) {
        cout << destination.getName() << ": " << destination.getDescription() << endl;
    }
}

void Travel::makeBooking(const Destination& destination, int numberOfPeople, const string& travelDate) {
    Booking booking(destination, numberOfPeople, travelDate);
    bookings.push_back(booking);
    cout << "dat ve thanh cong!" << endl;
}

void Travel::displayBookings() const {
    cout << "dat ve:" << endl;
    for (const auto& booking : bookings) {
        booking.displayBookingInfo();
    }
}
