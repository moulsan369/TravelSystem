#pragma once
#ifndef TRAVEL_H
#define TRAVEL_H

#include "Destination.h"
#include "Booking.h"
#include <vector>

using namespace std;

class Travel {
public:
	void addDestination(const Destination& destination);
	void displayDestinations() const;
	void makeBooking(const Destination& destination, int numCostomer, const string& travelDate);
	void displayBookings() const;

private:
	vector<Destination> destinations;
	vector<Booking> bookings;
};

#endif
