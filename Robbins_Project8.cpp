// Project8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Spencer Robbins

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

// Players Response
string PlayerAns()
{
    string Ans;
    cout << "Enter your choice (rock/paper/scissors): ";
    cin >> Ans;
    while (Ans != "rock" && Ans != "paper" && Ans != "scissors")
    {
        cout << "Invalid choice. Please enter rock, paper, or scissors: ";
        cin >> Ans;
    }
    return Ans;
}

// Computer Response
string ComputerAns()
{
    int RandNum = rand() % 3 + 1;
    if (RandNum == 1)
    {
        return "rock";
    }
    else if (RandNum == 2)
    {
        return "paper";
    }
    else
    {
        return "scissors";
    }
}

// Determine Winner
string ChooseWinner(string PlayerAnswer, string ComputerAnswer) {
    if (PlayerAnswer == ComputerAnswer)
    {
        return "tie";
    }
    else if (PlayerAnswer == "rock")
    {
        if (ComputerAnswer == "scissors")
        {
            return "player";
        }
        else
        {
            return "computer";
        }
    }
    else if (PlayerAnswer == "paper")
    {
        if (ComputerAnswer == "rock")
        {
            return "player";
        }
        else
        {
            return "computer";
        }
    }
    else
    {
        if (ComputerAnswer == "paper")
        {
            return "player";
        }
        else
        {
            return "computer";
        }
    }
}

// Function To Run The Game
int main()
{
    srand(time(NULL));
    cout << "Let's play a game of Rock, Paper, Scissors!" << endl;

    while (true)
    {
        string PlaAns = PlayerAns();
        string CompAns = ComputerAns();

        cout << "The computer chooses: " << CompAns << endl;

        string winner = ChooseWinner(PlaAns, CompAns);
        if (winner == "tie")
        {
            cout << "It's a Tie! Let's play another round! " << endl;
            cout << "_________________________________________________" << endl << endl;
        }
        else
        {
            cout << "The " << winner << " wins! Thank you for playing! " << endl;
            break;

        }
    }

    return 0;
}


