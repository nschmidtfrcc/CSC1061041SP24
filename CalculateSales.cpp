#include <iostream>
#include <fstream>
#include <string>
/* int calculateSales (int sales[31], int size) {
  //int sales[31];
  //stil figuring this out, how are we going to fill the sales array? using a file? what file?
  
  ifstream salesFile; //
  salesFile.open("vehiclesSold.txt");
  int price;
  if (salesFile.is_open() ) {
  salesFile >> price;
  cout << ;
  }
  while (salesFile.eof())
    for (int i = 1; i < 31; i++) 
    cin >> sales[i];
  
} */

using namespace std;
int main() {
  int sales[31];
  sales[0] = 0;
  for (int i = 1; i <= 31; i++) {
    sales[i] = 1 + sales[i-1];
    cout << "Day " << i << " Sales: $" << sales[i] << endl;
  }
  
  int dailySales = 0;
  dailySales = sales[1];
  cout << "Daily sales are: $" << dailySales << endl;
   //grabs array[1] 
  
  int weeklySales = 0;
  for (int i = 1; i <= 7; i++) {
    weeklySales = weeklySales + sales[i];
  }
  cout << "Weekly sales are: $" << weeklySales << endl;
  //grabs array[1-7]

  
  int monthlySales = 0;
  for (int i = 1; i <= 31; i++) {
    monthlySales = monthlySales + sales[i];
  }
  cout << "Monthly sales are: $" << monthlySales << endl;

  
int calculateSales (int sales[31], int size);
  //calculateSales (sales[31], size);
  //grabs array[1-31]
}  