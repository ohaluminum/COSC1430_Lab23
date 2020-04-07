#include <iostream>
#include "Boeing737.h"

using namespace std;

//test code, you don't need to modify
int main()
{
    Boeing737 * plane = new Boeing737(5);
    cout<<"Created Boeing737 flight plan"<<endl;
    
    plane->addWaypoint("Alpha");
    plane->addWaypoint("Charlie");
    plane->addWaypoint("Delta");
    
    cout<<"Added "<<plane->getWaypoint_num()<< " waypoints."<<endl;
    
    cout<<"Trip fuel cost: "<<plane->getFuelEstimate()<<" tons"<<endl; //Should be 3.75
    return 0;
}
