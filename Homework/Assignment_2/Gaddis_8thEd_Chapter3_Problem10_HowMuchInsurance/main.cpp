/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 9, 2017, 3:30 PM
 * Purpose:  program that displays minimum amount of insurance
 *  a home owner should buy
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
    double rpc;
    //Initialize variables
    
    //Input data
    cout << "How much would it cost to replace your building? ";
    cin >> rpc;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << "The lowest amount of insurance you should plan on buying"
            " is : $" << rpc *.8 << endl;
    //Exit stage right!
    return 0;
}

