// Project7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Spencer Robbins

#include <iostream>
using namespace std;

// Formula Setup
double Ctemp(double Ftemp)
{
    double Ctemp = ((Ftemp - 32) * 5) / 9;
    return Ctemp;
}
int main() 
{
    //Output of Header
    cout << " Fahrenheit\t Celcius" << endl;
    cout << " -----------------------" << endl;

    //Output of Data
    for(int Ftemp = 0; Ftemp <= 20; Ftemp++)
{
    double CtempValue = Ctemp(Ftemp);
    cout <<" " << Ftemp << "\t\t" << CtempValue << endl;
}
    return 0;
}
