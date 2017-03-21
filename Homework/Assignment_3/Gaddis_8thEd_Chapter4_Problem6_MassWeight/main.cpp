/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 19, 2017, 8:07 PM
 * Purpose:  Program that asks for an objects mass and 
 * then calculates and displays the weight 
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
    double m, w;
    //Initialize variables
    
    //Input data
    cout << "Enter the object's weight(Must be in Kilograms): ";
    cin >> m;
    //Map inputs to outputs or process the data
    w = m * 9.8;
    //Output the transformed data
    if (w > 1000)
    {
     cout << "The mass is: " << w << " Newtons \n";
     cout << "The object's mass is too heavy \n";
    }
    if(w < 10)
    {
     cout << "The mass is: " << w << " Newtons \n";
     cout << "The object's mass is too light  \n";
    }
    if(w >=10 && w <=1000)
    {
     cout << "The mass is: " << w << " Newtons \n";
    }
    
    
    //Exit stage right!
    return 0;
}

