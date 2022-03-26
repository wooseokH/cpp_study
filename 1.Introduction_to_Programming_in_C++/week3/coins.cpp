/*
Write a program that asks the user to enter an amount of money in the format of dollars and remaining cents. The program should calculate and print the minimum number of coins (quarters, dimes, nickels and pennies) that    are equivalent to the given amount.

*/

#include <iostream>
using namespace std;

const int WORTH_OF_PENNY=1;
const int WORTH_OF_NICKEL=5;
const int WORTH_OF_DIME=10;
const int WORTH_OF_QUARTER=25;
const int CENT_FOR_DOLLAR=100;

int main() {
    int numQuarter,numDime,numNickel,numPenny;
    int numDollar, numCent;
    int totalPrice;

    cout << "Please enter the amount of money to convert:" << endl;
    
    cout << "# of dollars: ";
    cin >> numDollar;
    
    cout << "# of cents: ";
    cin >> numCent;
    
    totalPrice=CENT_FOR_DOLLAR*numDollar+numCent;
    
    numQuarter=totalPrice/WORTH_OF_QUARTER;
    totalPrice=totalPrice-WORTH_OF_QUARTER*numQuarter;

    numDime=totalPrice/WORTH_OF_DIME;
    totalPrice=totalPrice-WORTH_OF_DIME*numDime;
    
    numNickel=totalPrice/WORTH_OF_NICKEL;
    totalPrice=totalPrice-WORTH_OF_NICKEL*numNickel;

    numPenny=totalPrice;
    
    cout << "The coins are "<< numQuarter << " quarters, " << numDime <<" dimes, " << numNickel <<" nickels and " << numPenny<<" pennies"<<endl;

    return 0;                
}