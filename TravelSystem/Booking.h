#pragma once
#ifndef BOOKING_H
#define BOOKING_H

#include "Destination.h"
#include <string>

using namespace std;

class Booking {
public:
    Booking(const Destination& destination, int numCostomer, const string& travelDate);

    void displayBookingInfo() const;

private:
    Destination destination;
    int numCostomer;
    string travelDate;
};

#endif 