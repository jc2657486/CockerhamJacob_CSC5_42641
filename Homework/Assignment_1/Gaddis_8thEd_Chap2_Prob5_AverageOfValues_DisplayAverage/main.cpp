/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on February , 2017, 11:32 AM
 * Purpose:  Add all 5 numbers together, then divide by 5 and
 *  display the Average. 
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
    int n1,n2,n3,n4,n5;
    //Initialize variables
    double sum, average;
    //Input data
    n1 = 28;
    n2 = 32;
    n3 = 37;
    n4 = 24;
    n5 = 33;
    //Map inputs to outputs or process the data
    sum = n1 + n2 + n3 + n4 + n5;
    average = sum / 5;
    //Output the transformed data
    cout << sum << endl; //Used this line of code just to double check my Sum
    cout << average << endl;
    //Exit stage right!
    return 0;
}

