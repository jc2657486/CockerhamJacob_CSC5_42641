/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 19, 2017, 4:40 PM
 * Purpose:  Program that finds the area of two Rectangles and
 * tells the user which area is greater or if they are the same
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
    double lng1, lng2, wd1, wd2, a1, a2;
    //Initialize variables
   
    //Input data
    cout << "Enter the required for Rectangle 1 :"
         << "\nLength: ";
        cin >> lng1;
        cout << "Width: ";
        cin >> wd1;
    cout << "\nEnter the required for Rectangle 2 :"
         << "\nLength: ";
        cin >> lng2;
        cout << "Width: ";
        cin >> wd2;    
    //Map inputs to outputs or process the data
        a1 = lng1 * wd1;
        a2 = lng2 * wd2;
        if (a1 > a2)
         cout << "\nThe area of rectangle 1 is greater than the area of rectangle 2 ";
            else if(a2 > a1)
            cout << "\nThe area of rectangle 2 is greater than the area of rectangle 1";
            else if(a1 == a2)
            cout << "\nThe area of both rectangles are the same ";
    //Output the transformed data
     
    //Exit stage right!
    return 0;
}

