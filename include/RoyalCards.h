#ifndef ROYAL_CARDS_H
#define ROYAL_CARDS_H

#include <cstdint>

/**
 * The main type representing a distinct bitset of poker cards.
 */
typedef std::uint64_t RoyalCardSet;


namespace RoyalCards {
extern const RoyalCardSet HEARTS_A;
extern const RoyalCardSet HEARTS_2;
extern const RoyalCardSet HEARTS_3;
extern const RoyalCardSet HEARTS_4;
extern const RoyalCardSet HEARTS_5;
extern const RoyalCardSet HEARTS_6;
extern const RoyalCardSet HEARTS_7;
extern const RoyalCardSet HEARTS_8;
extern const RoyalCardSet HEARTS_9;
extern const RoyalCardSet HEARTS_10;
extern const RoyalCardSet HEARTS_J;
extern const RoyalCardSet HEARTS_Q;
extern const RoyalCardSet HEARTS_K;

extern const RoyalCardSet CLUBS_A;
extern const RoyalCardSet CLUBS_2;
extern const RoyalCardSet CLUBS_3;
extern const RoyalCardSet CLUBS_4;
extern const RoyalCardSet CLUBS_5;
extern const RoyalCardSet CLUBS_6;
extern const RoyalCardSet CLUBS_7;
extern const RoyalCardSet CLUBS_8;
extern const RoyalCardSet CLUBS_9;
extern const RoyalCardSet CLUBS_10;
extern const RoyalCardSet CLUBS_J;
extern const RoyalCardSet CLUBS_Q;
extern const RoyalCardSet CLUBS_K;

extern const RoyalCardSet SPADES_A;
extern const RoyalCardSet SPADES_2;
extern const RoyalCardSet SPADES_3;
extern const RoyalCardSet SPADES_4;
extern const RoyalCardSet SPADES_5;
extern const RoyalCardSet SPADES_6;
extern const RoyalCardSet SPADES_7;
extern const RoyalCardSet SPADES_8;
extern const RoyalCardSet SPADES_9;
extern const RoyalCardSet SPADES_10;
extern const RoyalCardSet SPADES_J;
extern const RoyalCardSet SPADES_Q;
extern const RoyalCardSet SPADES_K;

extern const RoyalCardSet DIAMONDS_A;
extern const RoyalCardSet DIAMONDS_2;
extern const RoyalCardSet DIAMONDS_3;
extern const RoyalCardSet DIAMONDS_4;
extern const RoyalCardSet DIAMONDS_5;
extern const RoyalCardSet DIAMONDS_6;
extern const RoyalCardSet DIAMONDS_7;
extern const RoyalCardSet DIAMONDS_8;
extern const RoyalCardSet DIAMONDS_9;
extern const RoyalCardSet DIAMONDS_10;
extern const RoyalCardSet DIAMONDS_J;
extern const RoyalCardSet DIAMONDS_Q;
extern const RoyalCardSet DIAMONDS_K;

}

#endif // ROYAL_CARDS_H