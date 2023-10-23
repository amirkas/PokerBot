#include <list>


class PokerPlayer {

private:

	//General Stats
	float StackSize;


	//Preflop Stats
	std::list <float> VPIP;
	std::list <float> PFR;

	//3 Bet against different positions
	std::list <float> ThreeBetAgainstUTG;
	std::list <float> ThreeBetAgainstUTGOne;
	std::list <float> ThreeBetAgainstUTGTwo;
	std::list <float> ThreeBetAgainstUTGThree;
	std::list <float> ThreeBetAgainstLowjack;
	std::list <float> ThreeBetAgainstHijack;
	std::list <float> ThreeBetAgainstCutoff;
	std::list <float> ThreeBetAgainstButton;
	std::list <float> ThreeBetAgainstSmallBlind;
	std::list <float> ThreeBetAgainstBigBlind;
	
	
	//4 Bet Against Different Positions
	std::list <float> FourBetAgainstUTG;
	std::list <float> FourBetAgainstUTGOne;
	std::list <float> FourBetAgainstUTGTwo;
	std::list <float> FourBetAgainstUTGThree;
	std::list <float> FourBetAgainstLowjack;
	std::list <float> FourBetAgainstHijack;
	std::list <float> FourBetAgainstCutoff;
	std::list <float> FourBetAgainstButton;
	std::list <float> FourBetAgainstSmallBlind;
	std::list <float> FourBetAgainstBigBlind;


};