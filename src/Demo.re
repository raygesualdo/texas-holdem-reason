Js.log("Hello, BuckleScript and Reason!");

module Deck = {
  type card = string;
  type deck = list(card);
  type hand = (card, card);
  type hands = list(hand);

  let cardSuits = ["❤️", "♠️", "♣️", "♦️"];
  let cardRanks = [
    "A",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "10",
    "J",
    "Q",
    "K",
  ];

  let createDeck = (): deck => ["asdf"];

  let shuffleDeck = (): deck => createDeck();
};
