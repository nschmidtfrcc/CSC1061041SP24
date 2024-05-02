#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

struct Vehicle {
    string price; //unused (do not delete)
    string make;
    string color;
    string vin; //unused (do not delete)
    string model;
    string year;
    string timeOnLot; // Time in days
    // string blankSpace;
};

void displayMenu() {
    cout << endl << "Vehicle Search Menu:" << endl;
    cout << "1-All" << endl;
    cout << "2-Search by color" << endl;
    cout << "3-Search by make" << endl;
    cout << "4-Search by model" << endl;
    cout << "5-Search by year" << endl;
    cout << "6-Search by time on lot" << endl;
    cout << "7-Return to main menu" << endl;
}

void displayAllVehicles(const vector<string>& vehicles) {
    cout << endl << "All Vehicles:" << endl;
    for (size_t i = 1; i < vehicles.size()/7; ++i) {
        Vehicle car = {vehicles[(i*7)], vehicles[(i*7)+1], vehicles[(i*7)+2], vehicles[(i*7)+3], vehicles[(i*7)+4], vehicles[(i*7)+5], vehicles[(i*7)+6]};
        cout << "Make: " << car.make << ", Model: " << car.model << ", Color: " << car.color << ", Year: " << car.year << ", Time on Lot: " << car.timeOnLot << " day(s)" << endl;
    }
}

void searchByColor(const vector<string>& vehicles, const string& color) {
    cout << endl << "Vehicles with color of " << color << ":" << endl;
    for (size_t i = 1; i < vehicles.size()/7; ++i) {
        Vehicle car = {vehicles[(i*7)], vehicles[(i*7)+1], vehicles[(i*7)+2], vehicles[(i*7)+3], vehicles[(i*7)+4], vehicles[(i*7)+5], vehicles[(i*7)+6]};
        if (car.color == color) {
            cout << "Make: " << car.make << ", Model: " << car.model << ", Color: " << car.color << ", Year: " << car.year << ", Time on Lot: " << car.timeOnLot << " day(s)" << endl;
        }
    }
}

void searchByMake(const vector<string>& vehicles, const string& make) {
    cout << endl << "Vehicles with make of " << make << ":" << endl;
    for (size_t i = 1; i < vehicles.size()/7; ++i) {
        Vehicle car = {vehicles[(i*7)], vehicles[(i*7)+1], vehicles[(i*7)+2], vehicles[(i*7)+3], vehicles[(i*7)+4], vehicles[(i*7)+5], vehicles[(i*7)+6]};
        if (car.make == make) {
            cout << "Make: " << car.make << ", Model: " << car.model << ", Color: " << car.color << ", Year: " << car.year << ", Time on Lot: " << car.timeOnLot << " day(s)" << endl;
        }
    }
}

void searchByModel(const vector<string>& vehicles, const string& model) {
    cout << endl << "Vehicles with model type of " << model << ":" << endl;
    for (size_t i = 1; i < vehicles.size()/7; ++i) {
        Vehicle car = {vehicles[(i*7)], vehicles[(i*7)+1], vehicles[(i*7)+2], vehicles[(i*7)+3], vehicles[(i*7)+4], vehicles[(i*7)+5], vehicles[(i*7)+6]};
        if (car.model == model) {
            cout << "Make: " << car.make << ", Model: " << car.model << ", Color: " << car.color << ", Year: " << car.year << ", Time on Lot: " << car.timeOnLot << " day(s)" << endl;
        }
    }
}

void searchByYear(const vector<string>& vehicles, const string& year) {
    cout << endl << "Vehicles with year of " << year << ":" << endl;
    for (size_t i = 1; i < vehicles.size()/7; ++i) {
        Vehicle car = {vehicles[(i*7)], vehicles[(i*7)+1], vehicles[(i*7)+2], vehicles[(i*7)+3], vehicles[(i*7)+4], vehicles[(i*7)+5], vehicles[(i*7)+6]};
        if (car.year == year) {
            cout << "Make: " << car.make << ", Model: " << car.model << ", Color: " << car.color << ", Year: " << car.year << ", Time on Lot: " << car.timeOnLot << " day(s)" << endl;
        }
    }
}

void searchByTime(const vector<string>& vehicles, const string& time) {
    cout << endl << "Vehicles with time on lot of " << time << ":" << endl;
    for (size_t i = 1; i < vehicles.size()/7; ++i) {
        Vehicle car = {vehicles[(i*7)], vehicles[(i*7)+1], vehicles[(i*7)+2], vehicles[(i*7)+3], vehicles[(i*7)+4], vehicles[(i*7)+5], vehicles[(i*7)+6]};
        if (car.timeOnLot == time) {
            cout << "Make: " << car.make << ", Model: " << car.model << ", Color: " << car.color << ", Year: " << car.year << ", Time on Lot: " << car.timeOnLot << " day(s)" << endl;
        }
    }
}

// Implement other search functions similarly

int vehicleSearch(vector<string> vehicleListPre) {
    vector<string> vehicleList = vehicleListPre;
    // Initialize your list of vehicles here by pushing elements into the vector

    // Open and read file (this will push vehicle values into the vector, use this if passed in vector is not formatted properly or if no vector is passed into main)
    vehicleList.clear();
    ifstream fin;
    string file_name = "vehicleList.txt";
    fin.open(file_name.c_str());

    string line;

    while(getline(fin, line))
    {
        vehicleList.push_back(line);
    }
    fin.close();
    // End of read file

    // Insert "-"x7 for additional formatting
    for(int i = 0; i < 7; i++)
        vehicleList.insert(vehicleList.begin(), "-");
    // End


    int choice;
    string searchTerm;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayAllVehicles(vehicleList);
                break;
            case 2:
                cout << "Enter color: ";
                cin >> searchTerm;
                searchByColor(vehicleList, searchTerm);
                break;
            // Implement other cases similarly
            case 3:
                cout << "Enter make: ";
                cin >> searchTerm;
                searchByMake(vehicleList, searchTerm);
                break;
            case 4:
                cout << "Enter model: ";
                cin >> searchTerm;
                searchByModel(vehicleList, searchTerm);
                break;
            case 5:
                cout << "Enter year: ";
                cin >> searchTerm;
                searchByYear(vehicleList, searchTerm);
                break;
            case 6:
                cout << "Enter time on lot: ";
                cin >> searchTerm;
                searchByTime(vehicleList, searchTerm);
                break;
            case 7:
                cout << endl << "Returning to main menu." << endl;
                break;
            default:
                cout << endl << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}
