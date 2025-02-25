/*************************************************************************
* Program: BlackJack Game
* Programmer: Daudi Mlengela(dmlengela@cnm.edu), Carrah King(aking22@cnm.edu),
* Garcia,Aaron (agarcia1091@cnm.edu) and Mayer Landau(mlandau@cnm.edu).
* Date: November 7th 2022
* Purpose: To create a BlackJack Game for players
*************************************************************************/

#include "Card.h"

Card::Card()
{
}

Card::Card(int n)
{
    // determine suit and value

    int iSuit = n / 13;

    switch (iSuit)
    {
    case 0: suit = "S"; break;
    case 1: suit = "H"; break;
    case 2: suit = "C"; break;
    case 3: suit = "D"; break;
    }

    iValue = n % 13 + 1;

    switch (iValue)
    {
    case 1: value = "Ace"; break;

        //  2 - 10 we handle below in our 'default' case

    case 11: value = "Jack";  break;
    case 12: value = "Queen"; break;
    case 13: value = "King";  break;

    default: value = to_string(iValue); break;
    }

    if (iValue > 10)
        iValue = 10;
}
