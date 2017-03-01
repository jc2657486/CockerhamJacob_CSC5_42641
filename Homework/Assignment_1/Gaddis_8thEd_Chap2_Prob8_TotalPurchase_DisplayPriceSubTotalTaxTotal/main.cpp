/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on February 14, 2017, 11:32 AM
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
    double baseA, baseB, baseC;
    //Initialize variables
    double yearA = 5,yearB = 7,yearC = 10;
    //Input data
   
    //Map inputs to outputs or process the data
    baseA = yearA * 1.5;
    baseB = yearB * 1.5;
    baseC = yearC * 1.5;
    //Output the transformed data
    cout << "The Ocean level in " << yearA << " years will be " << baseA << " millimeters." << endl;
    cout << "The Ocean level in " << yearB << " years will be " << baseB << " millimeters." << endl;
    cout << "The Ocean level in " << yearC << " years will be " << baseC << " millimeters." << endl;
    //Exit stage right!
    return 0;
}

