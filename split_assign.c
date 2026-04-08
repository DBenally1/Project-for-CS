/*Filename: split_assign.c
/*Filename: split_assign.c
*Name: Reshawna Curley
*Program: split array and assign to 2 hands
*Version: 1.0 March 25, 2026
*Resources:n/a
*/
#include <stdio.h>
#define total_cards 52
#define hand_size 26

int main() {
        int deck[total_cards];
        int player1[hand_size];
        int player2[hand_size];
        int i;


        /*fill the deck with values from 0-51*/

        for (i=0; i < total_cards; i++) {
                deck[i] = i;
        }


        /*Split and assign to 2 hands (player 1 and 2)*/

        for (i=0; i < hand_size; i++) {
                player1[i] = deck[i];
                player2[i] = deck[i + hand_size];
        }

         /* print results
        printf("Hand 1: ");
        for(i=0; i<26; i++) printf("%d ", hand1[i]);
    
        printf("\nHand 2: ");
        for(i=0; i<26; i++) printf("%d ", hand2[i]);



return 0;
}

