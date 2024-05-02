#include <iostream>
#include <vector>
#include "Vehicle.h"
//this had a lot of duplicate getters and setters that were already in the vehicle.h so i cleaned it up -CL

void Vehicle::displayInfo() {
   std::cout << "Vehicle: " << make << ", " << model <<  ", " << year << ", " << color << ", $" << price << std::endl;
}

void Vehicle::PrintInfo() {
   //TODO
}