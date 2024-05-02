#include <iostream>
#include <vector>
#include "Vehicle.h"

//default constructor
Vehicle::Vehicle()   {
}
//Parameterized
Vehicle::Vehicle(int price, string make, string color, string vin, string model, int year, int timeOnLot)   {
   this->price = price;
   this->make = make;
   this->color = color;
   this->VIN = vin;
   this->model = model;
   this->year = year;
   this->timeOnLot = timeOnLot;
}//end parameterized constructor

//setters
void Vehicle::setPrice(int price)   {
   this->price = price;
}//end setPrice()
void Vehicle::setMake(string make)   {
   this->make = make;
}//end setMake()
void Vehicle::setColor(string color)   {
   this->color = color;
}//end setColor()
void Vehicle::setVIN(string vin)   {
   this->VIN = vin;
}//end setVIN()
void Vehicle::setModel(string model)   {
   this->model = model;
}//end setModel()
void Vehicle::setYear(int year)   {
   this->year = year;
}//end setYear()
void Vehicle::setTimeOnLot(int timeOnLot)   {
   this->timeOnLot = timeOnLot;
}//end setTimeOnLot()

//Getters
int Vehicle::getPrice()   {
   return price;
}//end getPrice()
int Vehicle::getYear()   {
   return year;
}//end getYear()
int Vehicle::getTimeOnLot()   {
   return timeOnLot;
}//end getTimeOnLot()
string Vehicle::getMake()   {
   return make;
}//end getMake()
string Vehicle::getColor()   {
   return color;
}//end getColor()
string Vehicle::getVIN()   {
   return VIN;
}//end getVIN()
string Vehicle::getModel()   {
   return model;
}//end getModel()

//Destructor
Vehicle::~Vehicle()   {
}//end destructor ~Vehicle()



   
   
   
   
   
   