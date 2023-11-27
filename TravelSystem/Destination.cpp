#include "Destination.h"

#include <string>


Destination::Destination(const string& name, const string& description)
	: name(name), description(description) {}

string Destination::getName() const {
	return name;
}

string Destination::getDescription() const {
	return description;
}
