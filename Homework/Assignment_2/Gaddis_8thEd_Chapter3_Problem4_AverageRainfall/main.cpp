/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 8, 2017, 7:30 PM
 * Purpose:  program that calculates the average rainfall for 3 months
 */

//System Libraries
#include <iostream>//Input - Output Library
#include<iomanip>
#include<string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string m1, m2, m3;
    double r1, r2, r3, average;
    //Initialize variables
    
    //Input data
    cout << "Enter the name of the month: "; 
    cin >> m1;
    cout << "Enter the amount of rain in inches: ";
    cin >> r1;
    cout << "Enter the name of the month: "; 
    cin >> m2;
    cout << "Enter the amount of rain in inches: ";
    cin >> r2;
    cout << "Enter the name of the month: "; 
    cin >> m3;
    cout << "Enter the amount of rain in inches: ";
    cin >> r3;
    
    //Map inputs to outputs or process the data
    average = (r1 + r2 +r3)/3;
    //Output the transformed data
    cout << setprecision(2) << fixed;
    cout << "Average rainfall for " << m1 << " ,"
            << m2 << " ,"
            << m3 
            << " is " << average << endl;
    //Exit stage right!
    return 0;
}

