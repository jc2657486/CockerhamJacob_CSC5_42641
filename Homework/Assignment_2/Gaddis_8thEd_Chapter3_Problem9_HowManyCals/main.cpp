/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 9, 2017, 2:55 PM
 * Purpose:  program that asks user to input how many cookies they 
 * have ate then reports how many calories that was
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
    double cook, total;
    //Initialize variables
    
    //Input data
    cout << "How many cookies did you eat? ";
    cin >> cook;
    //Map inputs to outputs or process the data
    total = cook * 100;
    //Output the transformed data
    
    cout << "You consumed: " << total << " calories.";
    //Exit stage right!
    return 0;
}

