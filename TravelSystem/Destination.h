#pragma once
#ifndef DESTINATION_H
#define DESTINATION_H

using namespace std;

#include <string>

class Destination {
public:
	Destination(const string& name, const string& description);

	string getName() const;
	string getDescription() const;

private:
	string name;
	string description;
};

#endif
