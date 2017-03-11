/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 8, 2017, 11:32 AM
 * Purpose:  program that calculates the average of 5 test scores
 */

//System Libraries
#include <iostream>//Input - Output Library
#include<iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double score1, score2, score3, score4, score5, average ;
    //Initialize variables
    
    //Input data
    cout << "Enter Test score 1: ";
    cin >> score1;
    cout << "Enter Test score 2: ";
    cin >> score2;
    cout << "Enter Test score 3: ";
    cin >> score3;
    cout << "Enter Test score 4: ";
    cin >> score4;
    cout << "Enter Test score 5: ";
    cin >> score5;
    //Map inputs to outputs or process the data
    average = (score1 + score2 + score3 + score4 + score5)/5;
    //Output the transformed data
    cout << setprecision(1) << fixed;
    cout << "The average test score is : " << average << endl;
    //Exit stage right!
    return 0;
}

