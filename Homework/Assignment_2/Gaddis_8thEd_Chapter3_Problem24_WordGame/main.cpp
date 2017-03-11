/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 10, 2017, 3:45 PM
 * Purpose:  program that plays a word game with the user
 */

//System Libraries
#include <iostream>//Input - Output Library
#include<iomanip>
#include<string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string  name, city, college, job, animal, pet;
    double age;
    //Initialize variables
    
    //Input data
    cout << "Enter your name : " ;
    getline (cin,name);
    cout << "Enter your age : ";
    cin >> age;
    cin.ignore();
    cout << "Enter the name of a city : " ;
    getline (cin,city);
    cout << "Enter the name of a college : " ;
    getline (cin,college);
    cout << "Enter the name of a profession : " ;
    getline (cin,job);
    cout << "Enter a type of animal : " ;
    getline (cin,animal);
    cout << "Enter the name of an animal : " ;
    getline (cin,pet);
    //Map inputs to outputs or process the data
     
    //Output the transformed data
    cout <<  "  Word Game" << endl;
    cout << "There once was a person named " << name << 
            " who lived in " << city << ". At the age of \n"
            << age << ", " << name << " went to college at "
            << college << ". " << name << " graduated and went to work \n"
            << "as a " << job << ". Then, " << name << " adopted a(n)" 
            << animal << " named " << pet << ". They \n" 
            << "both lived happily ever after!" << endl;
    //Exit stage right!
    return 0;
}

