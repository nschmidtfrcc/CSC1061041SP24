#include <iostream>
#include <fstream>
#include <vector>
#include "Customer.h"
using namespace std;

int main() {
   // Read from the text file
   ifstream CustomerList("Customers.txt");
   
   // Create a text string, which is used to output the text file
   vector<string> Customers;
   string customer;
   string phone;
   bool bought;
   
   // Instatiate the objects
   Customer one;
   Customer two;
   Customer three;
   Customer four;
   Customer five;
   
   if (CustomerList.is_open()) {
      // Use a while loop together with the getline() function to read the file line by line
      while (!CustomerList.eof()) {
         // Output the text from the file
         getline(CustomerList, customer);
         CustomerList >> one.setName(customer);
         getline(CustomerList, phone);
         CustomerList >> one.setPhone(phone);
         getline(CustomerList, bought);
         CustomerList >> one.setBought(bought);
      }
   } else {
      cout << "Couldnt open file" << endl;
   }
   
   /*for (int i = 0; i < CustomerList.size(); i++) {
      cout << CustomerList[i] << endl;
   }*/
   
   one.printInfo();
   
   // Close the file
   CustomersFile.close();
   
}