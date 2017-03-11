/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 8, 2017, 16:00 PM
 * Purpose:  How many tickets for each class of seats were sold.
*/

//System Libraries
#include <iostream>
#include <iomanip>
//Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double a = 15, b = 12, c = 9,
    amountA, amountB, amountC, total;
    //Initialize variables
    
    //Input data
    cout << "How many tickets were sold for Class A seating? : ";
    cin >> amountA;
    cout << "How many tickets were sold for Class B seating? : ";
    cin >> amountB;
    cout << "How many tickets were sold for Class C seating? : ";
    cin >> amountC;
    //Map inputs to outputs or process the data
    
    total = (amountA * a) + (amountB * b) + (amountC * c);
    cout << setprecision(2) << fixed ;
    //Output the transformed data
    cout << "Total sales generated from  all tickets: $" << total << endl;
    //Exit stage right!
    return 0;
}

