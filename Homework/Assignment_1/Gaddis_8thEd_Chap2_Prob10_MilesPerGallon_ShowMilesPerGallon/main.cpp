/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on February 28, 2017, 6:00 pM
 * Purpose: Program that calculates the number of miles per
 * gallon that the car gets.
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
    int miles = 375, gallons = 15;
    //Initialize variables
    int mpg;
    //Input data
    
    //Map inputs to outputs or process the data
    mpg = miles / gallons;
    
    //Output the transformed data
    cout << "This car gets " << mpg << " miles per gallon!" << endl;
    //Exit stage right!
    return 0;
}

