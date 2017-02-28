/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on February 27, 2017, 11:00 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
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
    double percentage = .58, yearSales = 8.6E6, prediction;
    //Initialize variables
    
    //Input data
    prediction = yearSales * percentage;
    //Map inputs to outputs or process the data
    cout << "East Coast division will generate $ " << prediction << " in sales, if the entire company has made $ 8.6 million overall."
            ;
            
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

