#include "dealer.h"

Dealer::Dealer(int cash)
{
    Dealer::cash = cash;
    GenerateDeck();
}

void Dealer::GenerateDeck()
{
    std::string suit;
    for (int i = 0; i < 4; i++)
    {
        switch (i)
        {
        case 0:
            suit = "Spades";
            break;
        case 1:
            suit = "Hearts";
            break;
        case 2:
            suit = "Clover";
            break;
        case 3:
            suit = "Diamonds";
            break;
        }
        for (int j = 1; j < 14; j++)
        {
            Card card;
            card.suit = suit;
            if (j >= 10)
            {
                card.value = 10;
            }
            else
            {
                card.value = j;
            }
            switch (j)
            {
            case 1:
                card.name = "Ace of " + suit;
                break;
            case 11:
                card.name = "Jack of " + suit;
                break;
            case 12:
                card.name = "Queen of " + suit;
                break;
            case 13:
                card.name = "King of " + suit;
                break;
            default:
                card.name = std::to_string(card.value) + " of " + suit;
            }
            this->deck->push_back(card);
        }
    }
     PrintDeck();
}

void Dealer::PrintDeck(){
    for(int i = 0; i < 52; i++){
    std::cout << this->deck->at(i).name << '\n';
   }
}