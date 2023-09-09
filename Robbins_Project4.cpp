// quadratic Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <cstdlib>

using namespace std;
int main()
{
    cout << "Spencer Robbins:" << endl << endl;

    //Prep For Program:
    double LetterA, LetterB, LetterC;
    double FormulaPositive, FormulaNegative, discriminate, Ans1, Ans2, Real, Imaginary;

    //Intro:
    cout << "Using the following equation below it allows the program to calculate integers A,B,& C:" << endl;
    cout << setw(32) << right << "A*x^2 + B*x + C = 0," << endl;
    cout << "The only exception is that A can not equal zero." << endl << endl;
    cout << "****************************************************************************************" << endl;

    //Receive Data:
    cout << "Enter A,B,& C : ";
    cin >> LetterA >> LetterB >> LetterC;

    //Prep For Formula:
    discriminate = (pow(LetterB, 2)) - (4 * LetterA * LetterC);

    //Display Answers:
    if (LetterA == 0)
    {
        cout << "Solution Won't be Calculated When A=0." << endl;
        cout << "****************************************************************************************" << endl;

        return 0;
    }
    if (discriminate > 0)
    {
        FormulaPositive = (-LetterB + sqrt(discriminate)) / (2 * LetterA);
        FormulaNegative = (-LetterB - sqrt(discriminate)) / (2 * LetterA);

        cout << "The Answers are Real:" << setw(10) << right << "x= " << FormulaPositive << endl;
        cout << setw(31) << right << "x= " << FormulaNegative << endl;
        cout << "****************************************************************************************" << endl;
    }
    else if (discriminate == 0)
    {
        FormulaPositive = (-LetterB + sqrt(discriminate)) / (2 * LetterA);

        cout << "There is One Real Answer:" << setw(10) << right << "x= " << FormulaPositive << endl;
        cout << "****************************************************************************************" << endl;
    }
    else
    {
        Real = (-LetterB) / (2 * LetterA);
        Imaginary = sqrt(-discriminate) / (2 * LetterA);

        cout << "The Answers are Imaginary:" << setw(10) << right << "x= " << Real << " + " << Imaginary << " *I" << endl;
        cout << setw(36) << right << "x= " << Real << " - " << Imaginary << " *I" << endl;
        cout << "****************************************************************************************" << endl;
    }


    return 0;
}
