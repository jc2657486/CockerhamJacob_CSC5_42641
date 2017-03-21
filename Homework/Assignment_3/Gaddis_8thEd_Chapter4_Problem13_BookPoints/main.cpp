/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 19, 2017, 9:36 PM
 * Purpose:  Program that asks user for how many books bought and 
 * then shows how many points they have earned 
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
    int book, points;
    
    //Initialize variables
    cout << "How many books did you buy this month?: ";
    cin >> book;
    //Input data
  
    //Map inputs to outputs or process the data
    if (book == 0)
    {
        points = 0;
        cout << "You have earned: " << points << " points. ";
    }
    if (book == 1)
    {
        points = 5;
        cout << "You have earned: " << points << " points.";
    }
    if (book == 2)
    {
        points = 15;
        cout << "You have earned: " << points << " points.";
    }
    if (book == 3)
    {
        points = 30;
        cout << "You have earned: " << points << " points.";
    }
    if (book == 4)
    {
        points = 60;
        cout << "You have earned: " << points << " points.";
    }
        else
            if (book == 0){     
        cout << "If you did not buy any books, you did not get any points";
    }
    //Output the transformed data
  
    //Exit stage right!
    return 0;
}

