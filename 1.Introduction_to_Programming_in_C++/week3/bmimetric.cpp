/*
Body mass index (BMI) is a number calculated from  a person’s weight and height.
According to the Centers for Disease Control and Prevention, the BMI is a fairly
reliable indicator of body fatness for most people. BMI does not measure body fat
directly, but research has shown that  BMI correlates to direct  measures  of  body  fat,  
such  as  underwater  weighing  and dual-energy X-ray absorptiometry. The formula 
for BMI is
    Weight/Height2

Where weight is in kilograms and height is in meters.


Write a program that prompts for metric weight and height and outputs the BMI with two decimal places.
*/

#include <iostream>
#include <cmath>
using namespace std;

const int PLACE_OF_ROUND=100;

int main() {
    int weight;
    double height, BMI;
    cout << "Please enter weight in kilograms: ";
    cin >> weight;
    cout << "Please enter height in meters: ";
    cin >> height; 
    
    BMI=weight/(height*height);

    BMI*=PLACE_OF_ROUND;
    BMI=round(BMI);
    BMI/=PLACE_OF_ROUND;

    cout << "BMI is: " << BMI<<endl;    

    return 0;                
}