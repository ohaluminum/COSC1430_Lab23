#pragma once
#include <string>
using namespace std;

class FlightComputer 
{
  int waypoint_num = 0;
  int waypoint_max;
  
  public:
  int getWaypoint_max(){return waypoint_max;};
  int getWaypoint_num(){return waypoint_num;};
  void setWaypoint_num(int num){waypoint_num = num;};
  
  FlightComputer(int waypoint_max_){waypoint_max = waypoint_max_;};
  
  /*FIX ME: please provide the following pure virtual functions.
- addWaypoint() that takes in a single string and returns nothing.
- getFuelEstimate() that returns a float  
  */
};
