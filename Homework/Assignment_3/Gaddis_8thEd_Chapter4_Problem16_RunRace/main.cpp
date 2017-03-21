/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 20, 2017, 5:20 PM
 * Purpose:  Program asks for three racers names and times, 
 * then shows who came 1st, 2nd, 3rd.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
#include<string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string name1, name2, name3;
    double t1, t2, t3;
    //Initialize variables
    
    //Input data
  cout << "Enter the name of first runner: ";
    getline(cin, name1);
    cout << "Enter the time for first runner: ";
    cin >> t1;
    if(t1 <= 0)
    cout << "Only positive times are allowed \n";
 
    cin.ignore();
    cout << "Enter the name of second runner: ";
    getline(cin, name2);
    cout << "Enter the time for second runner: ";
    cin >> t2;
    if(t2 <= 0)
    cout << "Only positive times are allowed \n";

    cin.ignore();
    cout << "Enter the name of third runner: ";
    getline(cin, name3);
    cout << "Enter the time for third runner: ";
    cin >> t3;
    if(t3 <= 0)
    cout << "Only positive times are allowed \n";
    //Map inputs to outputs or process the data
  
    //Output the transformed data
   if(t1 < t2 && t1 < t3){
    if(t2 < t3){
    cout << "First place: " << name1 << endl
    << "Second Place: " << name2 << endl
    << "Third Place: " << name3 << "\n";
        }
    if(t3 < t2){
    cout << "First place: " << name1 << endl
    << "Second Place: " << name3 << endl
    << "Third Place: " << name2 << "\n";
        }
    }

    if(t2 < t1 && t2 < t3){
    if(t1 < t3){
    cout << "First place: " << name2 << endl
    << "Second Place: " << name1 << endl
    << "Third Place: " << name3 << "\n\n";
        }
    if(t3 < t1){
    cout << "First place: " << name2 << endl
    << "Second Place: " << name3 << endl
    << "Third Place: " << name1 << "\n\n";
        }
    }

    if(t3 < t1 && t3 < t2){
    if(t1 < t2){
    cout << "First place: " << name3 << endl
    << "Second Place: " << name1 << endl
    << "Third Place: " << name2 << "\n\n";
        }
    if(t2 < t1){
    cout << "First place: " << name3 << endl
    << "Second Place: " << name2 << endl
    << "Third Place: " << name1 << "\n\n";
        }
    }
    //Exit stage right!
    return 0;
}

