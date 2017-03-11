/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 9, 2017, 3:50 PM
 * Purpose:  program that Displays monthly expenses and 
 * then the total annual cost.
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
    double loan, insu, gas, oil, tire, maint, month, year;
    //Initialize variables
    
    //Input data
    cout << "What is your Monthly Loan Payment? :";
    cin >> loan;
    cout << "What is your Monthly Insurance Payment? :";
    cin >> insu;
    cout << "What is your Monthly Gas Payment? :";
    cin >> gas;
    cout << "What is your Monthly Oil Payment? :";
    cin >> oil;
    cout << "What is your Monthly Tire Payment? :";
    cin >> tire;
    cout << "What is your Monthly Maintenance Payment? :";
    cin >> maint;
    //Map inputs to outputs or process the data
    month = loan + insu + gas + oil + tire + maint;
    year = month * 12;
    //Output the transformed data
    cout << "The total Monthly payment is : $" << month << endl;
    cout << "The annual payment is : $" << year << endl;
    //Exit stage right!
    return 0;
}

