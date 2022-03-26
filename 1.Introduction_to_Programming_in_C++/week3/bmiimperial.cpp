/*
Body  mass  index (BMI) is  a number  calculated  from  a person’s weight and height.
According to the Centers for Disease Control and Prevention, the BMI is a fairly
reliable indicator of body fatness for most people. BMI does not measure body fat
directly, but research  has shown that  BMI correlates  to  direct  measures  of  body  fat,  
such  as  underwater  weighing  and dual-energy X-ray absorptiometry. The formula 
for BMI is
    Weight/Height2

Where weight is in kilograms and height is in meters.


Write a program that prompts for weight in pounds and height in inches, 
converts  the values to metric, and then calculates the BMI  with two decimal places.
Note: 1 pound is  0.453592  kilograms and 1 inch is 0.0254  meters.
*/

#include <iostream>
#include <cmath>
using namespace std;

const int PLACE_OF_ROUND=100;
const double POUND_TO_KILOGRAM=0.453592;
const double INCH_TO_METER=0.0254;


int main() {
    double weight;
    double height, bmi;
    cout << "Please enter weight in pounds: ";
    cin >> weight;
    cout << "Please enter height in inches: ";
    cin >> height; 
    
    weight*=POUND_TO_KILOGRAM;
    height*=INCH_TO_METER;

    bmi=weight/(height*height);

    bmi*=PLACE_OF_ROUND;
    bmi=round(bmi);
    bmi/=PLACE_OF_ROUND;

    printf("BMI is: %.2f\n",bmi);

    return 0;                
}