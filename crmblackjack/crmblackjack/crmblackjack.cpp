// crmblackjack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
using namespace std;

int main()
{
	srand(time(NULL));

	vector<Card> vtrPlayerHand;
	int intPlayerTotal = 0;
	vector<Card> vtrDealerHand;
	int intDealerTotal = 0;
	Card objCard;
	Card objBadCard = Card(-2);
	Deck objDeck = Deck(4);
	
	cout << objCard.toString();

	for (int intGetCards = 1; intGetCards <= ((4 * 52) + 4); intGetCards++) {
		cout << objDeck.getCard().toString() << endl;
	}

    return 0;
}

