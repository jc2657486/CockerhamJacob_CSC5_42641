/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on February 27, 2017, 10:30 AM
 * Purpose:  Program that will compute the total sales tax from a purchase.
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
    const double CountyTax = .02;
    const double StateTax = .04;
    //Initialize variables
    double purchase = 95,
           TotalTax;
    //Input data
    
    //Map inputs to outputs or process the data
    TotalTax = {(CountyTax * purchase)+(StateTax * purchase)};
    //Output the transformed data
    cout << "Sales tax from $95 is $ " << TotalTax << endl;
    //Exit stage right!
    return 0;
}

