/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 7, 2017, 11:32 AM
 * Purpose:  program that calculates a car's gas mileage
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double tank, miles, trip;
    //Initialize variables
    
    //Input data
   cout << "Enter How many gallons your vehicle can hold: ";
    cin >> tank;
    cout << "Enter the number of miles drove before refilling: ";
    cin >> miles;
    //Map inputs to outputs or process the data
     trip = miles/tank;
    //Output the transformed data
   cout << "The car's MPG is: " << tank << endl << endl;
    //Exit stage right!
    return 0;
}

