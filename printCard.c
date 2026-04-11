/******************************
/*Filename: printCard.c
/*Name: Reshawna Curley and Dyatihi Benally
/*Program: Print card helper function for suit and rank
/*Version: 1.0 April 1, 2026
/*Resources: 
/****************************/

#include <stdio.h>
#include "printCard.h"
#include "War_Cards.h"

void printTenCard(int suit)
{
    if (suit == 0) {
        printf("10 of Diamonds\n");
    } else if (suit == 1) {
        printf("10 of Hearts\n");
    } else if (suit == 2) {
        printf("10 of Clubs\n");
    } else if (suit == 3) {
        printf("10 of Spades\n");
    }
}

void printCard(int card)
{
    int rank;
    int suit;

    if (card < 0 || card > 51) {
        printf("Error: invalid card value %d\n", card);
        return;
        }

    rank = card % 13;
    suit = card / 13;

    if (suit == 0) {
        if (rank == 0) {
            d2();
        } else if (rank == 1) {
            d3();
        } else if (rank == 2) {
            d4();
        } else if (rank == 3) {
            d5();
        } else if (rank == 4) {
            d6();
        } else if (rank == 5) {
            d7();
        } else if (rank == 6) {
            d8();
        } else if (rank == 7) {
            d9();
        } else if (rank == 8) {
            printTenCard(suit);
        } else if (rank == 9) {
            dj();
        } else if (rank == 10) {
            dq();
        } else if (rank == 11) {
            dk();
        } else if (rank == 12) {
            da();
        }
    } else if (suit == 1) {
        if (rank == 0) {
            h2();
        } else if (rank == 1) {
            h3();
        } else if (rank == 2) {
            h4();
        } else if (rank == 3) {
            h5();
        } else if (rank == 4) {
            h6();
        } else if (rank == 5) {
            h7();
        } else if (rank == 6) {
            h8();
        } else if (rank == 7) {
            h9();
        } else if (rank == 8) {
            printTenCard(suit);
        } else if (rank == 9) {
            hj();
        } else if (rank == 10) {
            hq();
        } else if (rank == 11) {
            hk();
        } else if (rank == 12) {
            ha();
        }
    } else if (suit == 2) {
        if (rank == 0) {
            c2();
        } else if (rank == 1) {
            c3();
        } else if (rank == 2) {
            c4();
        } else if (rank == 3) {
            c5();
        } else if (rank == 4) {
            c6();
        } else if (rank == 5) {
            c7();
        } else if (rank == 6) {
            c8();
        } else if (rank == 7) {
            c9();
        } else if (rank == 8) {
            printTenCard(suit);
        } else if (rank == 9) {
            cj();
        } else if (rank == 10) {
            cq();
        } else if (rank == 11) {
            ck();
        } else if (rank == 12) {
            ca();
        }
    } else if (suit == 3) {
        if (rank == 0) {
            s2();
        } else if (rank == 1) {
            s3();
        } else if (rank == 2) {
            s4();
        } else if (rank == 3) {
            s5();
        } else if (rank == 4) {
            s6();
        } else if (rank == 5) {
            s7();
        } else if (rank == 6) {
            s8();
        } else if (rank == 7) {
            s9();
        } else if (rank == 8) {
            printTenCard(suit);
        } else if (rank == 9) {
            sj();
        } else if (rank == 10) {
            sq();
        } else if (rank == 11) {
            sk();
        } else if (rank == 12) {
            sa();
        }
    }
}

