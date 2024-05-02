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
   int i;
   //for loop to display elements of the vector
   for(i = 0; i < size; i++)   {
      newCar.at(i).displayInfo();
    }// end for loop*/
}// end displayCars()
      
   
int main() {
    //Initializing variables RR
    int Sales[3] = { 0 };
    vector<Vehicle> inventory;
    vector<Vehicle> sold;
    vector<Customer> customers;
    string userIn = "0";

    //Calling setup RR
    readCustomers(*customers);
    readVehicles(*inventory, *sold);
    CalcSales(Sales[]);

    //Starting main menu loop RR
    while (userIn != "5") {
        //Printing menu RR
        std::cout << "---Welcome to Desktop Database---" << std::endl << std::endl;
        std::cout << "What would you like to see? Enter the number to the left of your selection:" << std::endl;
        std::cout << "1) Search available vehicles" << std::endl;
        std::cout << "2) Search sold vehicles" << std::endl;
        std::cout << "3) Customer info" << std::endl;
        std::cout << "4) Sales" << std::endl;
        std::cout << "5) Quit" << std::endl;

        std::cin >> userIn;
        //Input validation; gets user input until input is valid RR
        if (userIn == "1") {
            vehicleSearch(*inventory);
        }// end if
        else if (userIn == "2") {
            vehicleSearch(*sold);
        }// end else if
        else if (userIn == "3") {
            displayCustomerInfo(*customers);
        }// end else if
        else if (userIn == "4") {
            std::cout << "Daily sales: " << Sales[0] << std::endl;
            std::cout << "Weekly sales: " << Sales[1] << std::endl;
            std::cout << "Monthly sales: " << Sales[2] << std::endl;
        }// end else if
        else if (userIn == "5") {
            continue;
        }// end else if
        else {
            std::cout << "Input invalid; please enter a number from 1-5 inclusive." << std::endl;
        }// end if


    }// end while

    return 0;
}//end main()

