/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 20, 2017, 7:25 PM
 * Purpose:  Write a program that asks for the wavelength of an 
 * electromagnetic wave in meters and then displays what the wave is 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double wl;
    //Initialize variables
    
    //Input data
    cout << "Enter the Wavelength(meters): ";
    cin >> wl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    if(wl < 0.00 && wl > 0.01)
    cout << "The wave is a Radio Wave";
    if(wl < 0.01 && wl > 0.001)
    cout << "The wave is a Microwave";
    if(wl < 0.001 && wl > 0.0000007)
    cout << "The wave is Infrared";
    if(wl < 0.0000007 && wl > 0.0000004)
    cout << "The wave is Visible Light";
    if(wl < 0.0000004 && wl > 0.00000001)
    cout << "The wave is Ultraviolet";
    if(wl < 0.00000001 && wl > 0.00000000001)
    cout << "The wave is X-Rays";
    if(wl < 0.00000000001)
    cout << "The wave is Gamma Rays";
    if(wl > 1)
    cout << "The wave is Mysterious 0_o";
    //Exit stage right!
    return 0;
}

