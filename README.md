# COSC1430_Lab23
Abstract Class and Pure Virtual Function

    As most airliners are grounded during the Covid pandemic, your job is to upgrade their FlightComputer software.

FlightComputer class

    This is an abstract class whose methods are designed for building a working flight trip planning system.

    Parts of FlightComputer.h are already completed, please add the following members:

      -addWaypoint() is a public pure virtual function that takes in a single string and returns nothing.
      -getFuelEstimate() is a public pure virtual function that returns a float.
 
Boeing737 class

    This class represents the flight computer for a Boeing737.

    Define the Boeing737 class that extends FlightComputer.

    Add and Implement the following members:

      -waypoints: a private dynamic string array used to hold waypoint names.
      -a constructor that takes in an int for waypointmax and create a dynamic array of string with waypointmax elements. Make sure to call FlightComputer's constructor during this constructor's definition in Boeing737.cpp.
      -a destructor to release the memory created for the dynamic array.
      -addWaypoint(): redefine this function to add the new string into waypoints and then increment waypoint_num. You can safely assume that there is enough room in the dynamic array for the new string, thus there is no need to extend the dynamic array for this exercise.
      -getFuelEstimate(): redefine this function to return the float value for waypoint_num * 1.25.
      
A reference main() function is provided to you to test your code. There is NO NEED to modify this main() function!
