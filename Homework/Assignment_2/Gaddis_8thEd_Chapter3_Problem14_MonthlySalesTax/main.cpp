/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 10, 2017, 2:26 PM
 * Purpose:  program that shows a monthly tax report
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
    string month;
    double year, totalCollected, sales,
    stateTaxTotal, countyTaxTotal, totalTax;
    //Initialize variables
    double stateTax = 0.04, countyTax = 0.02 ;
    //Input data
    cout << "Enter Month: ";
    getline(cin, month);
    cout << "Enter Year: ";
    cin >> year;
    cout << "Enter total amount collected at cash register: $";
    cin >> totalCollected;
    //Map inputs to outputs or process the data
     sales = totalCollected/1.06;

    stateTaxTotal = sales * stateTax;
    countyTaxTotal = sales * countyTax;
    totalTax = stateTaxTotal + countyTaxTotal;
    //Output the transformed data
    cout << "\n-------------------------\n";
    cout << "Month: " << month << endl;
    cout << "Year:  " << year << endl;
    cout << "-------------------------\n";
    cout << setprecision(2) << fixed;
    cout << "Total collected: " << setw(10) << "$" << setw(9) << totalCollected << endl;
    cout << "Sales: " << setw(20) << "$" << setw(9) << sales << endl;
    cout << "County Sales Tax:" << setw(10) << "$" << setw(9) << countyTaxTotal << endl;
    cout << "State Sales Tax: " << setw(10) << "$" << setw(9) << stateTaxTotal << endl;
    cout << "Total Sales Tax: " << setw(10) << "$" << setw(9) << totalTax << endl << endl;

    //Exit stage right!
    return 0;
}

