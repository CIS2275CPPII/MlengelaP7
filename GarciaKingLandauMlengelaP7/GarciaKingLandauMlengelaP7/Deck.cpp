#include "deck.h"
#include "deck.h"
/*************************************************************************
* Program: BlackJack Game
* Programmer: Daudi Mlengela(dmlengela@cnm.edu), Carrah King(), Garcia ()
* and Mayer Landau(mlandau@cnm.edu),
* Date: November 7th 2022
* Purpose: To create a BlackJack Game for players
*************************************************************************/
#include <random>
#include <chrono>
#include <array>
using namespace std;

#include "Deck.h"
#include "Card.h"

Deck::Deck() // default constructor
{
    // Seed the random number generator

    unsigned int seed =
    static_cast<unsigned int>(chrono::steady_clock::now().time_since_epoch().count());

    engine = default_random_engine(seed);

    // Load 'cards' with the numbers from 0 ... cards.size() - 1 and
    // then shuffle

    for (size_t i = 0; i < cards.size(); i++)
        cards[i] = i;

    Shuffle();

    topCard = 0;

}
void Shuffle()
{
    size_t nSwaps = cards.size();

    for (size_t i = 0; i < nSwaps; i++)
    {
        int c1 = 0;
        int c2 = 0;

        while (c1 == c2)
        {
            c1 = RandomCard();
            c2 = RandomCard();
        }

        std::swap(cards[c1], cards[c2]);
    }
};
int RandomCard()
{
    std::uniform_int_distribution<int> values(0, 51);

    return(values(engine));
}

void Deal(Card& c)
{
    // If there aren't very many cards
    // left reshuffle and start from the beginning

    if (topCard > 34)
    {
        Shuffle();
        topCard = 0;
    }

    c = Card(cards[topCard++]);
}


