#include "Vehicle.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

//Declare a function to display the vector
void displayCars(vector<Vehicle>& newCar)   {
   //declare variables
   int size = newCar.size();
   int ii;
   //for loop to display elements of the vector
   /*for(ii = 0; ii < size; ii++)   {
      cout << "Car price is: $" << newCar[ii].getPrice() << endl;
      cout << "Car make is: " << newCar[ii].getMake() << endl;
      cout << "Car color is: " << newCar[ii].getColor() << endl;
      cout << "Car vin is: " << newCar[ii].getVIN() << endl;
      cout << "Car model is: " << newCar[ii].getModel() << endl;
      cout << "Car year is: " << newCar[ii].getYear() << endl;
      cout << "The car spent " << newCar[ii].getTimeOnLot() << " days on the lot." << endl;
    }// end for loop*/
}// end displayCars()
      
   
int main()   {
   ifstream inFS;

   //declare the object
   vector<Vehicle> cars;
   vector<Vehicle> soldCars;
   int ii;
   //Declare variables
   int year;
   int timeOnLot;
   int price;
   string model;
   string make;
   string VIN;
   string color;
   bool sold;
   
   // Opening File - MH
   inFS.open("vehicleList.txt");
   if (!inFS.is_open()) {
      cout << "ERROR: COULD NOT OPEN FILE" << endl;
   } // End file open if - MH
   
   // READ FILE - MH
   while (!inFS.eof()) { // Change: Moved order of data reading to match other txt file - MH
      Vehicle car;
      inFS >> make;
      car.setMake(make);
      inFS >> model;
      car.setModel(model);
      inFS >> color;
      car.setColor(Vehicle::stringToEnumConverter(color));
      inFS >> VIN;
      car.setVIN(VIN);
      inFS >> year;
      car.setYear(year);
      inFS >> timeOnLot;
      car.setTime(timeOnLot);
      inFS >> price;
      car.setPrice(price);
      inFS >> sold;
      if (sold = true) {
         soldCars.push_back(car);
      } else {
         cars.push_back(car);
      } // End vector pushing - MH
      
      //cout << car.getPrice() << endl; // Dev print - MH
      cout << cars.size() << endl; // Dev print - MH
      cout << soldCars.size() << endl; // Dev print - MH
   } // End read file while - MH
   if (!inFS.eof()) {
      cout << "ERROR: INPUT FAILURE BEFORE REACHING END OF FILE" << endl;
   } // End error if - MH
   
   // Close File - MH
   inFS.close();
   
 /*  //1*
   //Variable initialization can be done two ways: either through a constructor or through setters
   cout << "Please enter car price: " << endl;
   cin >> price;
   cout << "Please enter car make: " << endl;
   //1.1*
   cin >> make;
   cout << endl;
   cout << "Please enter car color: " << endl;    //Hypothetical vin : 1M8GDM9A_KP042788
   cin >> color;
   cout << endl;
   cout << "Please enter car vin: " << endl;
   cin >> VIN;
   cout << endl;
   cout << "Please enter car model: " << endl;
   cin >> model;
   cout << endl;
   cout << "Please enter car year: " << endl;
   cin >> year;
   cout << endl;
   cout << "Please enter the time on the lot: " << endl;
   cin >> timeOnLot;
   cout << endl;*/
   
   //2*
   //Through constructor and pushing the object onto a vector
  // Vehicle car(price, make, color, VIN, model, year, timeOnLot);
  // cars.push_back(car);
   
   //make a call to display cars
   //displayCars(cars);
   
   readCustomers();
    readVehicles();
    CalcSales();

    //Initializing vars RR
    int userIn = 0;

    //Starting main menu loop RR
    while (userIn != 5) {
        //Printing menu RR
        std::cout << "Welcome to Desktop Database." << std::endl << std::endl;
        std::cout << "What would you like to see? Enter the number to the left of your selection." << std::endl;
        std::cout << "1 - Search available vehicles" << std::endl;
        std::cout << "2 - Search sold vehicles" << std::endl;
        std::cout << "3 - Customer info" << std::endl;
        std::cout << "4 - Sales" << std::endl;
        std::cout << "5 - Quit" << std::endl;

        //Initializing validation var RR
        bool validIn = false;

        //Input validation; gets user input until input is valid RR
        while (!validIn) {
            try {
                std::cin >> userIn;
                validIn = true;
            }
            catch (...) {
                std::cout << "Input invalid; please enter a number from 1-5 inclusive." << endl;
            }
        }

        std::cout << userIn;
    }
   
   
   
   return 0;
}//end main()