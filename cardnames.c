/**** Code for pulling random cards and comparing cards for game ****/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printCard(int card);
void back(void);
void split_assign(int player1[], intplayer2[]);
int cardRank(int card){
	int rank = card % 13;
	if (rank == 12) return 13;
	return rank + 1;
}

int main(void){
srand (time(NULL));
	
int player1[52];
int player2[52];
int player1size = 26;
int player2size = 26;

int i;
int j;

split_assign(player1, player2);
	
for(i = 0; i < 26; i++){
	player1[i] = i;
	player2[i] = i + 26;
}	

int randompull1 = rand() % player1size;
int randompull2 = rand() % player2size;

int c1 = player1[randompull1];
int c2 = player2[randompull2];

for (i = randompull1; i < player1size - 1; i++){
	player1[i] = player1[i + 1];
}
player1size --;

for (i = randompull2; i < player2size - 1; i++){
	player2[i] = player2[i+1];
}
player2size--; 

printf ("Player 1 drew card: %d\n", c1);
printCard(c1);

printf ("Player 2 drew card: %d\n", c2);
printCard(c2);

if (cardRank(c1) > cardRank(c2)){
	player1[player1size++] = c1;
	player1[player1size++] = c2;
	printf("Player 1 wins the round!\n");
}
else if (cardRank(c2) > cardRank(c1)){
	player1[player2size++] = c1;
	player2[player2size++] = c2;
	printf("Player 2 wins the round!\n");
}
else{
	int warPile[52];
	int warSize = 0;
	int warCard1;
	int warCard2;

	printf ("Card values are equal...");
	printf ("WAR!\n");

	warPile[warSize++] = c1;
	warPile[warSize++] = c2;

	while(1){
	if (player1size < 4){
		printf ("Player 1 does not have enough cards for war. Player 2 wins!\n");
		return 0;
	}

	if (player2size < 4){
		printf ("Player 2 does not have enough cards for war. Player 1 wins!\n");
		return 0;
	}

	/** back of cards **/
	for (i = 0; i < 3; i++){
		printf ("Player 1 places face down card:\n");
		back();
		warPile[warSize++] = player1[0];
		for (j = 0; j < player1size - 1; j++){
			player1[j] = player1[j+1];
		}
		player1size--;

		printf ("Player 2 places a face-down card:\n");
		back();
		warPile[warSize++] = player2[0];
		for (j = 0; j < player2size - 1; j++){
			player2[j] = player2[j+1];
		}
		player2size--;
	}

	/** face up card **/
	warCard1 = player1[0];
	for (j = 0; j < player1size - 1; j++){
		player1[j] = player1[j+1];
	}
	player1size--;

	warCard2 = player2[0];
	for (j=0; j < player2size - 1; j++){
		player2[j] = player2[j+1];
	}
	player2size--;
	
	warPile[warSize++] = warCard1;
	warPile[warSize++] = warCard2;

	printf ("Player 1 card is:\n");
	printCard(warCard1);

	printf ("Player 2 card is:\n");
	printCard(warCard2);

	/** Declaring winner **/
	if (cardRank(warCard1) > cardRank(warCard2)){
		for (i = 0; i < warSize; i++){
			player1[player1size++] = warPile[i];
		}
		printf ("Player 1 wins the war\n");
		break;
	}
	else if (cardRank(warCard2) > cardRank(warCard1)){
		for (i = 0; i < warSize; i++){
			player2[player2size++] = warPile[i];
		}
		printf ("Player 2 wins the war\n");
		warWinnerFound = 1;
		break;
	} 
	else{
		printf ("WAR AGAIN!\n");
	}
	}
}
	return 0;
}
