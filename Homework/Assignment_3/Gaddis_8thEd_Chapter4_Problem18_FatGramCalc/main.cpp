/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 20, 2017, 6:06 PM
 * Purpose:  Write a program that asks for the number of calories and
 *  fat grams in a food
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
   double calories, fatgrams, fatcalories, lowfat;
    //Initialize variables
    
    //Input data
   cout << "Enter the number of calories in food: ";
   cin >> calories;
   if(calories < 0){
       cout << "\nCalories cannot be less than 0!! \n"
            << "Enter calories again: ";
   }

   cout << "\nEnter the number of fat grams in food: ";
   cin >> fatgrams;
   if(fatgrams < 0 || fatgrams > calories){
       cout << "\nFatgrams cannot be less than 0 or greater than calories!! \n"
            << "Enter Fatgrams again: ";
   }
    //Map inputs to outputs or process the data
    fatcalories = fatgrams * 9;
    lowfat = fatcalories/calories;
    //Output the transformed data
    cout << "Calories from fat: " << lowfat * 100 << "%" << "\n";
    if(lowfat < 0.30)
    cout << "This food is low in fat.";
    //Exit stage right!
    return 0;
}

