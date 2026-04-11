
/*Filename: split_assign.c
*Name: Reshawna Curley
*Program: split array and assign to 2 hands
*Version: 1.0 March 25, 2026
*Resources: lecture slides on void and indexing 
*/
#include <stdio.h>
#include <stdlib.h>
#include "split_assign.h"
#define total_cards 52
#define hand_size 26

void split_assign(int player1[], int player2[])
{
        int deck[total_cards];
        int i;
        int j;
        int temp;
        /*fill the deck with values from 0-51*/
        for (i=0; i < total_cards; i++) {
                deck[i] = i;
        }
        /*shuffles deck*/
        for (i = total_cards - 1; i>10 ; i--) {
                j = rand() % (i + 1);
                temp = deck[i];
                deck[i] = deck[j];
                deck[j] = temp;
                }

        /*Split and assign to 2 hands (player 1 and 2)*/

        for (i=0; i < hand_size; i++) {
                player1[i] = deck[i];
                player2[i] = deck[i + hand_size];
        }
}

