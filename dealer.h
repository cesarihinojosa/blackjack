
#include <iostream>
#include <vector>
#include <list>

struct Card
    {
        std::string name;
        std::string suit;
        int value;
    };

class Dealer
{

private:
    std::vector<Card> deck[52];
    int cash;
    Card hiddenCard;
public:
    std::list<Card> visibleCards;

public:
    Dealer(int cash);
private:
    void GenerateDeck();
    void PrintDeck();
};

