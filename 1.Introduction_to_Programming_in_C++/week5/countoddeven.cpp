/*
Write a program that inputs four numbers separated by spaces.  The program should count how many odd and even numbers there are. The program should then output one of three possibilities depending on how many even and odd numbers are entered:

more evens
more odds
same number of evens and odds

For example, an execution could look like this:


Please enter 4 positive integers, separated by a space: 

 2 3 5 7
more odds
*/

#include <iostream>
using namespace std;


int main() {
    
    int var1,var2,var3,var4;
    int countOdds=0,countEvens=0;

    cout << "Please enter 4 positive integers, separated by a space:";
    cin >>var1>>var2>>var3>>var4;

    if ((var1%2)==0)      // if even number
        countEvens+=1;
    else                  // if odd number
        countOdds+=1;

    if ((var2%2)==0)      // if even number
        countEvens+=1;
    else                  // if odd number
        countOdds+=1;

    if ((var3%2)==0)      // if even number
        countEvens+=1;
    else                  // if odd number
        countOdds+=1;

    if ((var4%2)==0)      // if even number
        countEvens+=1;
    else                  // if odd number
        countOdds+=1;

    if (countEvens>countOdds)
        cout <<"more evens\n";
    else if(countEvens==countOdds)
        cout <<"same number of evens and odds\n";
    else
        cout <<"more odds\n";
    
    return 0;                
}