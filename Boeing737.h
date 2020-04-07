#pragma once

#include "FlightComputer.h"

#include <string>
using namespace std;

#ifndef BOEING737_H
#define BOEING737_H

class Boeing737 : public FlightComputer {
private:
	//waypoints: a private dynamic string array used to hold waypoint names.
	string *waypoints;

public:
	Boeing737(int waypoint_max = 0);
	~Boeing737();
	void addWaypoint(string waypoint);
	float getFuelEstimate();
};

#endif