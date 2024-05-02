#include "Customer.h"
#include <iostream>
#include <vector>

//I: Recieve vector from main and asks the user what they want to display from the vector
//P: Loops through the vector and picks out the ones that are either interested or not based on what the user selected in the menu
//O: Outputs the user selected category
void displayCustomerInfo(vector<Customer> customerPass){
   int choice = 0;
   
   while(choice > 4 || choice < 1){
      cout << "---Customer Search Menu---" << endl;
      cout << "1) Display All" << endl;
      cout << "2) Display Intersted" << endl;
      cout << "3) Display Not Interested" << endl;
      cout << "4) Exit" << endl;
      cin >> choice;
      if(choice > 4 || choice < 1){
         cout << "Invalid option. Please try again";
      }//input validation
   }//reprompts the user if they didnt choose something in the menu
   
   switch (choice){
      //prints every object in the customerPass vector
      case 1:   
         for(Customer curr : customerPass){
            curr.printInfo();
         }//end for loop
         break;
         
      //prints every customer that is interested in the customerPass vector
      case 2:
         for(Customer curr : customerPass){
            if(curr.getBought()){curr.printInfo();}
         }//end for loop
         break;
         
      //prints every customer that is not interested in the customerPass vector
      case 3:
         for(Customer curr : customerPass){
            if(!curr.getBought()){curr.printInfo();}
         }//end for loop
         break;
         
      default:
         break;
   }//end menu switch
   
   return;
}//end displayCustomerInfo function