/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 19, 2017, 7:18 PM
 * Purpose:  Program that calculates and displays a persons BMI
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
    double wt, ht, BMI;
    //Initialize variables
    
    //Input data
    cout << "Enter your Weight(pounds): ";
    cin >> wt;
    cout << "Enter your Height(inches): ";
    cin >> ht;
    //Map inputs to outputs or process the data
    BMI = (wt * 703) / (ht * ht);
    //Output the transformed data
      if(BMI < 18.5)
    cout << "You are considered to be underweight.";
    if(BMI >= 18.5 && BMI <= 25)
    cout << "You are considered to be optimal weight.";
    if(BMI > 25)
    cout << "You are considered to be overweight.";
    //Exit stage right!
    return 0;
}

