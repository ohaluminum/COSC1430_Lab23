#pragma once
#include <string>
using namespace std;

class FlightComputer 
{
private:
    int waypoint_num = 0;
    int waypoint_max;
  
public:
    FlightComputer(int waypoint_max) 
    { 
        this->waypoint_max = waypoint_max; 
    }

    int getWaypoint_max()
    {
        return waypoint_max;
    }

    int getWaypoint_num()
    {
        return waypoint_num;
    }

    void setWaypoint_num(int num)
    {
        waypoint_num = num;
    }

    //Function addWaypoint() is a public pure virtual function that takes in a single string and returns nothing.
    virtual void addWaypoint(string) = 0;

    //Function getFuelEstimate() is a public pure virtual function that returns a float.
    virtual float getFuelEstimate() = 0;
};





