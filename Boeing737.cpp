#include "Boeing737.h"


/*
 *Define a constructor that takes in an int for waypoint_max.
 *Make sure to call FlightComputer's constructor during this constructor's definition in Boeing737.cpp.
 */
Boeing737::Boeing737(int waypoint_max) : FlightComputer(waypoint_max)
{
    waypoints = new string[waypoint_max];
}

//Define the destructor to release the memory allocated for the dynamic array.
Boeing737::~Boeing737()
{
    delete[] waypoints;
    waypoints = nullptr;
}

/*Redefine addWaypoint() to add the new string into waypoints and then increment waypoint_num.
 *You can safely assume that there is enough room in the dynamic array for the new string.
 *Thus there is no need to extend the dynamic array for this exercise.
 */
void Boeing737::addWaypoint(string waypoint)
{
    waypoints[getWaypoint_num()] = waypoint;
    setWaypoint_num(getWaypoint_num() + 1);
}

//Redefine getFuelEstimate() to return the float value for waypoint_num * 1.25 
float Boeing737::getFuelEstimate()
{
    return getWaypoint_num() * 1.25;
}
