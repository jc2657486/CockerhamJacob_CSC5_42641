/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 9, 2017, 4:26 PM
 * Purpose:  program that converts Celsius to fahrenheit 
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
    double c, f ;
    //Initialize variables
    
    //Input data
    cout << "Enter the Temperature in Celsius : ";
    cin >> c;
    //Map inputs to outputs or process the data
    f = ((9/5)* c) + 32; 
    //Output the transformed data
    cout << "The temperature in Farhenheit is " << f << endl;
    //Exit stage right!
    return 0;
}

