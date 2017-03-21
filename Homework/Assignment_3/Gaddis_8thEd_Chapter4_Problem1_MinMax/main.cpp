/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 18, 2017, !2:45 PM
 * Purpose:  Program that requires user to enter two numbers then 
 * determines which is smaller and bigger. 
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
    double num1,num2;
    //Initialize variables
   
    //Input data
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if (num1 > num2)
        cout << "The Bigger number is: " << num1 
         << "The Smaller number is: " << num2 << endl;
    else
        cout << "The Bigger number is: " << num2 << endl 
        << "The Smaller number is: " << num1 << endl;
     //Exit stage right!
    return 0;
}

