/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on February 28, 2017, 5:07 PM
 * Purpose:  Display the Meal Cost, Tax AMount, Tip Amount, and Total Bill.
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
    double taxAmount, tipAmount, totalBill;
    const double tax = .0675;
    const double tip = .2;
    //Initialize variables
    double bill = 88.67;
    //Input data
    
    //Map inputs to outputs or process the data
    taxAmount = bill * tax;
    tipAmount = (taxAmount + bill) * tip;
    totalBill = taxAmount + bill + tipAmount;
    //Output the transformed data
    cout << "Meal Cost: $" << bill << endl;
    cout << "Tax Amount: $" << taxAmount << endl;
    cout << "Tip Amount: $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl;
    //Exit stage right!
    return 0;
}

