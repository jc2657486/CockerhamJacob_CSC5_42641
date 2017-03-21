/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 19, 2017, 8:45 PM
 * Purpose:  Program that asks for an objects mass and 
 * then calculates and displays the weight 
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include<iomanip>
#include<ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int num1, num2, sum, ans;
    
    //Initialize variables
     unsigned seed = time(0);
     srand(seed);
     num1 = 100 + rand() % 999;
     num2 = 100 + rand() % 999;
     sum = num1 + num2; 
    cout << setw(5) << "   " << num1 << endl;
    cout << setw(5) << "+ " << num2 << endl ;
    cout << setw(5) << "    ------\n";
    //Input data
     cout << "Enter the answer: ";
     cin >> ans;
    //Map inputs to outputs or process the data
   
    //Output the transformed data
    
     if (ans == sum)
         cout << "Your answer is correct.";
     else
         cout << "Your answer was wrong. The correct answer is: "
                 << sum << endl;
    //Exit stage right!
    return 0;
}

