/* 
 * File:   main.cpp
 * Author: Jacob Cockerham
 * Created on March 1st, 2017, 5:00 PM
 * Purpose: Calculate the percentage Gas Tax on a gallon of gas, 
 * and the percentage profit made from a gallon of gas given
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float percent = 100.0;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    
    double fedTax=0.184, 
          cpTax=0.100,
          cafTax=0.390,   
          caSalesTx=0.08, 
          oP=0.07; 
    
    double pPr,bPr; 
    double pTax,pPrft;
    //Input data
    cout << "How much did you pay at the gas station?" << endl;
    cin >> pPr;
    
    //Map inputs to outputs or process the data
   
    pPrft = oP / bPr * percent ;
    pTax = (bPr * caSalesTx +fedTax + cafTax + cpTax) / bPr * percent ;
    bPr = (pPr-fedTax-cafTax-cpTax) / (1+caSalesTx) ;
    
    //Output the transformed data
    cout << "Federal tax = $" << fedTax << endl;
    cout << "California tax = $" << cafTax << endl;
    cout << "Cap and trade tax = $" << cpTax << endl;
    cout << "California sales tax = $" << caSalesTx * bPr << endl;
    cout << "Base Price = $" << bPr << endl;
    cout << "Oil company profit =  " << pPrft << "%" << endl;
    cout << "Total percentage tax =  " << pTax << "%" << endl;
    
    //Exit stage right!
    return 0;
}


