/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 18, 2017, 2:30 PM
 * Purpose:  Program that converts a user input number between 1-10 
 * into a Roman numeral using a switch statement 
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
    int num;
    //Initialize variables
   
    //Input data
    cout << "Enter a number between 1 and 10: ";
    cin >> num;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
     if(num < 1 || num > 10)
        cout << "The number cannot be less than 1 or greater than 10!! ";
        else{
        switch(num)
        {
            case 1: cout << "The Roman numeral is: I ";
                break;
            case 2: cout << "The Roman numeral is: II ";
                break;
            case 3: cout << "The Roman numeral is: III ";
                break;
            case 4: cout << "The Roman numeral is: IV ";
                break;
            case 5: cout << "The Roman numeral is: V ";
                break;
            case 6: cout << "The Roman numeral is: VI ";
                break;
            case 7: cout << "The Roman numeral is: VII ";
                break;
            case 8: cout << "The Roman numeral is: VIII ";
                break;
            case 9: cout << "The Roman numeral is: IX ";
                break;
            case 10: cout << "The Roman numeral is: X ";
                break;
               default:
                   cout << "You must enter a number between 1 - 10!! ";
                        }  
                }
    //Exit stage right!
    return 0;
}

