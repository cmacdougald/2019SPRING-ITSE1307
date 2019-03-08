// crmblackjack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	int intCard = 1;
	int intFaceValue = 0;
	int intSuiteValue = 0;
	int intPointValue = 0;
	string strFace = "";
	string strSuite = "";

	srand(time(NULL));

	intCard = rand() % 52 + 1; //Give me a number between 0 and 51 then add 1.

	intFaceValue = ((intCard - 1) % 13) + 1;
	intSuiteValue = ((intCard - 1) / 13) + 1;

	intPointValue = (intFaceValue > 10) ? 10 : intFaceValue;

	switch (intSuiteValue) {
		case 1:
			strSuite = "Clubs";
			break;
		case 2:
			strSuite = "Diamonds";
			break;
		case 3:
			strSuite = "Hearts";
			break;
		case 4:
			strSuite = "Spades";
			break;
		default:
			strSuite = "ERROR";
	}

	switch (intFaceValue) {
		case 1:
			strFace = "Ace";
			break;
		case 11:
			strFace = "Jack";
			break;
		case 12:
			strFace = "King";
			break;
		case 13:
			strFace = "Queen";
			break;
		default:
			strFace = to_string(intFaceValue);
	}

	cout << "{"
		<< "\"card\": " << intCard << ", "
		<< "\"face\": " << intFaceValue << ", "
		<< "\"suite\": " << intSuiteValue << ", "
		<< "\"points\": " << intPointValue << ", "
		<< "\"string\": \"" << strFace << " of " << strSuite << "\""
		<< "}" << endl;

    return 0;
}

