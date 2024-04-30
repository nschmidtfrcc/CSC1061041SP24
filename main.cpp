//Includes RR
#include <iostream>
#include <string>

int main () {
    //Initializing data RR
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

        cout << userIn;
    }
    return 0;
}