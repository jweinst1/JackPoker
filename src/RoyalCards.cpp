#include "RoyalCards.h"

namespace RoyalCards {
 const RoyalCardSet HEARTS_A = (RoyalCardSet)1 << 0;
 const RoyalCardSet HEARTS_2 = (RoyalCardSet)1 << 1;
 const RoyalCardSet HEARTS_3 = (RoyalCardSet)1 << 2;
 const RoyalCardSet HEARTS_4 = (RoyalCardSet)1 << 3;
 const RoyalCardSet HEARTS_5 = (RoyalCardSet)1 << 4;
 const RoyalCardSet HEARTS_6 = (RoyalCardSet)1 << 5;
 const RoyalCardSet HEARTS_7 = (RoyalCardSet)1 << 6;
 const RoyalCardSet HEARTS_8 = (RoyalCardSet)1 << 7;
 const RoyalCardSet HEARTS_9 = (RoyalCardSet)1 << 8;
 const RoyalCardSet HEARTS_10 = (RoyalCardSet)1 << 9;
 const RoyalCardSet HEARTS_J = (RoyalCardSet)1 << 10;
 const RoyalCardSet HEARTS_Q = (RoyalCardSet)1 << 11;
 const RoyalCardSet HEARTS_K = (RoyalCardSet)1 << 12;

 const RoyalCardSet CLUBS_A = (RoyalCardSet)1 << 13;
 const RoyalCardSet CLUBS_2 = (RoyalCardSet)1 << 14;
 const RoyalCardSet CLUBS_3 = (RoyalCardSet)1 << 15;
 const RoyalCardSet CLUBS_4 = (RoyalCardSet)1 << 16;
 const RoyalCardSet CLUBS_5 = (RoyalCardSet)1 << 17;
 const RoyalCardSet CLUBS_6 = (RoyalCardSet)1 << 18;
 const RoyalCardSet CLUBS_7 = (RoyalCardSet)1 << 19;
 const RoyalCardSet CLUBS_8 = (RoyalCardSet)1 << 20;
 const RoyalCardSet CLUBS_9 = (RoyalCardSet)1 << 21;
 const RoyalCardSet CLUBS_10 = (RoyalCardSet)1 << 22;
 const RoyalCardSet CLUBS_J = (RoyalCardSet)1 << 23;
 const RoyalCardSet CLUBS_Q = (RoyalCardSet)1 << 24;
 const RoyalCardSet CLUBS_K = (RoyalCardSet)1 << 25;

 const RoyalCardSet SPADES_A = (RoyalCardSet)1 << 26;
 const RoyalCardSet SPADES_2 = (RoyalCardSet)1 << 27;
 const RoyalCardSet SPADES_3 = (RoyalCardSet)1 << 28;
 const RoyalCardSet SPADES_4 = (RoyalCardSet)1 << 29;
 const RoyalCardSet SPADES_5 = (RoyalCardSet)1 << 30;
 const RoyalCardSet SPADES_6 = (RoyalCardSet)1 << 31;
 const RoyalCardSet SPADES_7 = (RoyalCardSet)1 << 32;
 const RoyalCardSet SPADES_8 = (RoyalCardSet)1 << 33;
 const RoyalCardSet SPADES_9 = (RoyalCardSet)1 << 34;
 const RoyalCardSet SPADES_10 = (RoyalCardSet)1 << 35;
 const RoyalCardSet SPADES_J = (RoyalCardSet)1 << 36;
 const RoyalCardSet SPADES_Q = (RoyalCardSet)1 << 37;
 const RoyalCardSet SPADES_K = (RoyalCardSet)1 << 38;

 const RoyalCardSet DIAMONDS_A = (RoyalCardSet)1 << 39;
 const RoyalCardSet DIAMONDS_2 = (RoyalCardSet)1 << 40;
 const RoyalCardSet DIAMONDS_3 = (RoyalCardSet)1 << 41;
 const RoyalCardSet DIAMONDS_4 = (RoyalCardSet)1 << 42;
 const RoyalCardSet DIAMONDS_5 = (RoyalCardSet)1 << 43;
 const RoyalCardSet DIAMONDS_6 = (RoyalCardSet)1 << 44;
 const RoyalCardSet DIAMONDS_7 = (RoyalCardSet)1 << 45;
 const RoyalCardSet DIAMONDS_8 = (RoyalCardSet)1 << 46;
 const RoyalCardSet DIAMONDS_9 = (RoyalCardSet)1 << 47;
 const RoyalCardSet DIAMONDS_10 = (RoyalCardSet)1 << 48;
 const RoyalCardSet DIAMONDS_J = (RoyalCardSet)1 << 49;
 const RoyalCardSet DIAMONDS_Q = (RoyalCardSet)1 << 50;
 const RoyalCardSet DIAMONDS_K = (RoyalCardSet)1 << 51;

const RoyalCardSet SUIT_HEARTS = HEARTS_A |
                                        HEARTS_2 |
                                        HEARTS_3 |
                                        HEARTS_4 |
                                        HEARTS_5 |
                                        HEARTS_6 |
                                        HEARTS_7 |
                                        HEARTS_8 |
                                        HEARTS_9 |
                                        HEARTS_10 |
                                        HEARTS_J |
                                        HEARTS_Q |
                                        HEARTS_K;
                                        
const RoyalCardSet SUIT_CLUBS = CLUBS_A |
                                        CLUBS_2 |
                                        CLUBS_3 |
                                        CLUBS_4 |
                                        CLUBS_5 |
                                        CLUBS_6 |
                                        CLUBS_7 |
                                        CLUBS_8 |
                                        CLUBS_9 |
                                        CLUBS_10 |
                                        CLUBS_J |
                                        CLUBS_Q |
                                        CLUBS_K;
                                        
                                        
const RoyalCardSet SUIT_SPADES = SPADES_A |
                                        SPADES_2 |
                                        SPADES_3 |
                                        SPADES_4 |
                                        SPADES_5 |
                                        SPADES_6 |
                                        SPADES_7 |
                                        SPADES_8 |
                                        SPADES_9 |
                                        SPADES_10 |
                                        SPADES_J |
                                        SPADES_Q |
                                        SPADES_K;
                                        
const RoyalCardSet SUIT_DIAMONDS = DIAMONDS_A |
                                        DIAMONDS_2 |
                                        DIAMONDS_3 |
                                        DIAMONDS_4 |
                                        DIAMONDS_5 |
                                        DIAMONDS_6 |
                                        DIAMONDS_7 |
                                        DIAMONDS_8 |
                                        DIAMONDS_9 |
                                        DIAMONDS_10 |
                                        DIAMONDS_J |
                                        DIAMONDS_Q |
                                        DIAMONDS_K;
 const RoyalCardSet GROUP_A = HEARTS_A |
                                    CLUBS_A |
                                    SPADES_A |
                                    DIAMONDS_A;
                                    
 const RoyalCardSet GROUP_2 = HEARTS_2 |
                                    CLUBS_2 |
                                    SPADES_2 |
                                    DIAMONDS_2;
                                    
 const RoyalCardSet GROUP_3 = HEARTS_3 |
                                    CLUBS_3 |
                                    SPADES_3 |
                                    DIAMONDS_3;
                                    
 const RoyalCardSet GROUP_4 = HEARTS_4 |
                                    CLUBS_4 |
                                    SPADES_4 |
                                    DIAMONDS_4;
                                    
 const RoyalCardSet GROUP_5 = HEARTS_5 |
                                    CLUBS_5 |
                                    SPADES_5 |
                                    DIAMONDS_5;
                                    
 const RoyalCardSet GROUP_6 = HEARTS_6 |
                                    CLUBS_6 |
                                    SPADES_6 |
                                    DIAMONDS_6;
                                    
 const RoyalCardSet GROUP_7 = HEARTS_7 |
                                    CLUBS_7 |
                                    SPADES_7 |
                                    DIAMONDS_7;
                                    
                                        
 const RoyalCardSet GROUP_8 = HEARTS_8 |
                                    CLUBS_8 |
                                    SPADES_8 |
                                    DIAMONDS_8;
                                    
 const RoyalCardSet GROUP_9 = HEARTS_9 |
                                    CLUBS_9 |
                                    SPADES_9 |
                                    DIAMONDS_9;
                                    
                                    
 const RoyalCardSet GROUP_10 = HEARTS_10 |
                                    CLUBS_10 |
                                    SPADES_10 |
                                    DIAMONDS_10;
                                    
 const RoyalCardSet GROUP_J = HEARTS_J |
                                    CLUBS_J |
                                    SPADES_J |
                                    DIAMONDS_J;
                                    
 const RoyalCardSet GROUP_Q = HEARTS_Q |
                                    CLUBS_Q |
                                    SPADES_Q |
                                    DIAMONDS_Q;                                   
                                    
                                    
 const RoyalCardSet GROUP_K = HEARTS_K |
                                    CLUBS_K |
                                    SPADES_K |
                                    DIAMONDS_K;                               
                                    
 const RoyalCardSet ROYALFLUSH_HEARTS = HEARTS_10 |
                                        HEARTS_J |
                                        HEARTS_Q |
                                        HEARTS_K |
                                        HEARTS_A;
                                        
 const RoyalCardSet ROYALFLUSH_CLUBS = CLUBS_10 |
                                       CLUBS_J |
                                       CLUBS_Q |
                                       CLUBS_K |
                                       CLUBS_A;
                                       
 const RoyalCardSet ROYALFLUSH_SPADES = SPADES_10 |
                                        SPADES_J |
                                        SPADES_Q |
                                        SPADES_K |
                                        SPADES_A;
                                        
 const RoyalCardSet ROYALFLUSH_DIAMONDS = DIAMONDS_10 |
                                          DIAMONDS_J |
                                          DIAMONDS_Q |
                                          DIAMONDS_K |
                                          DIAMONDS_A;
}