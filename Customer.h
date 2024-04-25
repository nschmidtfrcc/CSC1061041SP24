/*
Header file for customer class
Includes Customer data members, constructors, getters/setters, and printInfo member function
*/
#pragma once

#include <iostream>
#include <string>

using namespace std;

	// Written by: BC
class Customer {
private:
	string name; //Customer name
	string phone; //Customer phone
	bool bought;  //Purchased data member

public:
	// Default constructor
	Customer() {
		name = "Unknown"; // Set default name
		phone = "Unknown"; // Set default phone
		bought = false; // Set default purchase status
	}

	// Parameterized constructor
	Customer(string& name, string& phone, bool bought) {
		this->name = name; // Set name from parameter
		this->phone = phone; // Set phone from parameter
		this->bought = bought; // Set purchase status from parameter
	}

	// Setter for customer's name
	void setName(string& name) {
		this->name = name; // Update customer's name
	}

	// Setter for customer's phone number
	void setPhone(string& phone) {
		this->phone = phone; // Update customer's phone number
	}

	// Setter for purchase status
	void setBought(bool bought) {
		this->bought = bought; // Update purchase status
	}

	// Getter for customer's name
	string getName() const { return name; } // Return customer's name

	// Getter for customer's phone number
	string getPhone() const { return phone; } // Return customer's phone number

	// Getter for purchase status
	bool getBought() const { return bought; } // Return purchase status

	// Prints customer information
	void printInfo() const {
		cout << "Name: " << name << endl;
		cout << "Phone: " << phone << endl;
		cout << "Bought: " << (bought ? "Yes" : "No") << endl;
	}
};


//Testing for dev push