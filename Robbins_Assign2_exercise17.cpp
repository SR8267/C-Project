#include <iostream>
using namespace std;

int main()
{
    //Spencer Robbins, Project 2

    string fname = string();
    char answer = char();
    cout << "Welcome to Stock Traders LLC" << endl;
    cout << "Please enter your name: ";
    cin >> fname;
    cout << "Hello " << fname << ", the stock price is $35.00 each. " << endl;
    int stock;
    cout << "How many stocks would you like to purchase?: ";
    cin >> stock;
    const double price = 35.00;
    double circumference = stock * price;
    circumference = stock * price;
    cout << "Your total cost is: $" << circumference << endl;
    cout << "There is a required 2% commission fee." << endl;
    cout << "Type 'Yes' to confirm purchase : ";
    cin >> answer;
    if (answer == 'Yes' || answer == 'yes');
    const double percent = 0.02;
    double total = circumference * percent;
    total = circumference * percent;
    double totalNew = total + circumference;
    totalNew = total + circumference;
    cout << "The final cost is: $" << totalNew << endl;
    cout << "Thank you for your purchase" << endl;
    cout << " " << endl;
    cout << " " << endl;
    return 0;
}