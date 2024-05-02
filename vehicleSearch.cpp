#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Vehicle {
    string color;
    string make;
    string model;
    int year;
    int timeOnLot; // Time in days
};

void displayMenu() {
    cout << "Vehicle Search Menu:" << endl;
    cout << "1) All" << endl;
    cout << "2) Search by color" << endl;
    cout << "3) Search by make" << endl;
    cout << "4) Search by model" << endl;
    cout << "5) Search by year" << endl;
    cout << "6) Search by time on lot" << endl;
    cout << "7) Return to main menu" << endl;
}

void displayAllVehicles(const vector<Vehicle>& vehicles) {
    cout << "All Vehicles:" << endl;
    for (size_t i = 0; i < vehicles.size(); ++i) {
        cout << "Make: " << vehicles[i].make << ", Model: " << vehicles[i].model << ", Color: " << vehicles[i].color << ", Year: " << vehicles[i].year << ", Time on Lot: " << vehicles[i].timeOnLot << " days" << endl;
    }
}

void searchByColor(const vector<Vehicle>& vehicles, const string& color) {
    cout << "Vehicles with color " << color << ":" << endl;
    for (size_t i = 0; i < vehicles.size(); ++i) {
        if (vehicles[i].color == color) {
            cout << "Make: " << vehicles[i].make << ", Model: " << vehicles[i].model << ", Year: " << vehicles[i].year << ", Time on Lot: " << vehicles[i].timeOnLot << " days" << endl;
        }
    }
}

// Implement other search functions similarly

int main() {
    vector<Vehicle> vehicleList;
    // Initialize your list of vehicles here by pushing elements into the vector

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
            case 7:
                cout << "Returning to main menu." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 7);

    return 0;
}