/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on February 28, 2017, 8:30 PM
 * Purpose:  Show the item prices, subtotal, sales tax, and total.
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
    double subPrice, total, salesT;
    //Initialize variables
    double p1 = 15.95, p2 = 24.95, p3 = 6.95, p4 = 12.95, p5 = 3.95;
    const double tax = .07;
    //Input data
    
    //Map inputs to outputs or process the data
    subPrice = p1 + p2 + p3 + p4 + p5;
    salesT = subPrice * tax;
    total = subPrice + salesT;
    //Output the transformed data
    cout << "Price of Item 1 = $" << p1 << endl;
    cout << "Price of Item 2 = $" << p2 << endl;
    cout << "Price of Item 3 = $" << p3 << endl;
    cout << "Price of Item 4 = $" << p4 << endl;
    cout << "Price of Item 5 = $" << p5 << endl;
    cout << "SubTotal = $" << subPrice << endl;
    cout << "Sales Tax = $" << salesT << endl;
    cout << "Total Price = $" << total << endl;
    //Exit stage right!
    return 0;
}

