#include <iostream>
#include <vector>
#include "Vehicle.h"
//this had a lot of duplicate getters and setters that were already in the vehicle.h so i cleaned it up -CL

//Necessary for file reading -CL
Color Vehicle::stringToEnumConverter(const std::string& str) {
    auto it = stringToEnum.find(str);
    if (it != stringToEnum.end()) {
        return it->second;
    }
    // Handle unknown string, maybe throw an exception or return a default value
    return Red; // Default to Red for unknown strings
}

void Vehicle::displayInfo() {
   std::cout << "Vehicle: " << make << ", " << model <<  ", " << year << ", " << color << ", $" << price << std::endl;
}

void Vehicle::PrintInfo() {
   //TODO
}