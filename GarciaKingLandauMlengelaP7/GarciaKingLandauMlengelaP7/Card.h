/*************************************************************************
* Program: BlackJack Game
* Programmer: Daudi Mlengela(dmlengela@cnm.edu), Carrah King(aking22@cnm.edu),
* Garcia,Aaron (agarcia1091@cnm.edu) and Mayer Landau(mlandau@cnm.edu).
* Date: November 7th 2022
* Purpose: To create a BlackJack Game for players
*************************************************************************/
#ifndef CARD_H
#define CARD_H

#include<string>
#include<string>
using namespace std;

class Card
{
    //member variables
private:
    int  iValue{ 0 }; //numeric value corresponding to the card
    string value; // "Ace" "2" through "9", "Ten", "Jack", "Queen", "King"
    string suit; //"S", "H", "C", "D"

public:

    Card(){} // default constructor
    Card(int n){} // Overloaded constructor. The heart of the card class
    void SetIValue(int val) { iValue = val;}
    string GetValue() { return value; }
    int GetIValue() { return iValue; }
    string GetSuit() { return suit; }
};
#endif

