#include "PokerPlayer.cpp"
#include "Cards.cpp"
#include <list>


class GameState {

	int NumberOfPlayers;

	//Player Positions
	PokerPlayer SmallBlind;
	PokerPlayer BigBlind;
	PokerPlayer* UTG;
	PokerPlayer* UTGOne;
	PokerPlayer* UTGTwo;
	PokerPlayer* UTGThree;
	PokerPlayer* Lowjack;
	PokerPlayer* Hijack;
	PokerPlayer* Cutoff;
	PokerPlayer* Button;

	//0 - in between   || 1 - preflop  || 2 - flop || 3 - turn || 4 - river
	int BettingStage;

	std::list <Card> Board;

	
};