
enum CardValue {Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
	Jack, Queen, King, Ace};

enum Suits {Diamond, Heart, Spade, Club};

class Card {

private:
	CardValue Value;
	Suits Suit;

public:

	Card(CardValue value, Suits suit) {
		Value = value;
		Suit = suit;
	}

	CardValue getCardValue() {
		return Value;
	}

	Suits getSuit() {
		return Suit;
	}
};