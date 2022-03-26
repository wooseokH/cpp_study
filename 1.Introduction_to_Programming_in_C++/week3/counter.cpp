/*
Write a program that asks the user to enter a number of quarters, dimes, nickels and pennies and then outputs the monetary value of the coins in the format of dollars and remaining cents.
Your program should interact with the user exactly as it shows in the following example:
Please enter the number of coins:
# of quarters: 20
# of dimes: 4
# of nickels: 13
# of pennies: 17
The total is 6 dollars and 22 cents
*/

#include <iostream>
using namespace std;

const int WORTH_OF_PENNY=1;
const int WORTH_OF_NICKEL=5;
const int WORTH_OF_DIME=10;
const int WORTH_OF_QUARTER=25;
const int CENT_FOR_DOLLAR=100;

int main() {
    int numPenny, numNickel, numDime, numQuarter;     // number of coins  
    int totalPrice, dollar, cent;    

    cout << "Please enter the number of coins:" << endl;
    
    cout << "# of quarters: ";
    cin >> numQuarter;
    
    cout << "# of dimes: ";
    cin >> numDime;
    cout << "# of nickels: ";
    cin >> numNickel;
    cout << "# of pennies: ";
    cin >> numPenny;

    totalPrice=WORTH_OF_QUARTER*numQuarter+WORTH_OF_DIME*numDime+WORTH_OF_NICKEL*numNickel+WORTH_OF_PENNY*numPenny;
    dollar=totalPrice/CENT_FOR_DOLLAR;
    cent=totalPrice%CENT_FOR_DOLLAR;

    
    printf("the total is %d dollars and %d cents\n",dollar,cent);


    return 0;                
}