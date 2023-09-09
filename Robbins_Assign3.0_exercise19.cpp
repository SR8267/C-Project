// PRAC3.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Spencer Robbins

#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
    //Monthly Payments
    //The monthly payment on a loan may be calculated by the following formula:
    //payment=((ratex(1+rate)^N/(((1+rate)^N)-1))*L
    //Rate: is the monthly interest rate which is the annual interest rate divided by 12.(12 percent annual interest would be 1
    //percent montly interest)N is the number of paymenets, and L is the amount of the loan. Write a program that asks for these
    //values then displays a report similar to:
    // Loan Amount: $#, Monthly Interest Rate: #%, Number of Payments: #, Monthly Payment: $#, Amount Paid Back: $#, Interest Paid: $#
    //          $10,000                        1%                     36               $332.14            $11,957.15         $1,957.15 
    //********************************************************************************************************************************

    double MonthlyIntRate, MonthlyPlusOne, PaymentTopF, PayBotPlusOne, PaymentBottumF, PayBotMinusOne,
        PaymentTotBeforeL, PaymentFinal, LoanAmount, NumPayment, PaidBack, IntPaid, BeforePercentConv;

    cout << "Your Monthly Payment Break Down" << endl;
    cout << "Enter Your Current Loan Amount: $";
    cin >> LoanAmount;
    cout << "Enter the Monthly Interest Rate: ";
    cin >> BeforePercentConv;
    cout << "Number of Payments: ";
    cin >> NumPayment; 
    cout << "**************************************" << endl;
    
    //convert percent into a decimal
    MonthlyIntRate = BeforePercentConv / 100;
    //Top Of Formula
    MonthlyPlusOne = (1 + MonthlyIntRate);
    PaymentTopF = MonthlyIntRate * pow(MonthlyPlusOne, NumPayment);
    //Bottum Of Formula
    PayBotPlusOne = (1 + MonthlyIntRate);
    PaymentBottumF = pow(PayBotPlusOne, NumPayment);
    PayBotMinusOne = (PaymentBottumF - 1);
    //Completed Formula
    PaymentTotBeforeL = PaymentTopF / PayBotMinusOne;
    PaymentFinal = PaymentTotBeforeL * LoanAmount;
    //Finishing calculations
    PaidBack = PaymentFinal * NumPayment;
    IntPaid = PaidBack - LoanAmount;

    cout << setw(14) << left << "Loan Amount:" << setw(12) << right << fixed << setprecision(2) << "$" << LoanAmount << endl;
    cout << setw(29) << left << "Monthly Interest Rate:" << setw(4) << right << fixed <<setprecision (0)
        << BeforePercentConv << "%" << endl;
    cout << setw(31) << left << "Number Of Payments:" << setw(3) << right << NumPayment << endl;
    cout << setw(16) << left << "Monthly Payment:" << setw(12) << right << fixed << setprecision(2)<< "$" << PaymentFinal << endl;
    cout << setw(15) << left << "Amount Paid Back:" << setw(9) << right << "$" << PaidBack << endl;
    cout << setw(15) << left << "Interest Paid:" << setw(12) << right << "$" << IntPaid << endl;
    cout << "**************************************" << endl;

    return 0;
}

