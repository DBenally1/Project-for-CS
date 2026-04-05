/**** Code for pulling random cards and comparing cards for game ****/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

srand (time(NULL));

int player1[26];
int player2[26];
int player1size = 26;
int player2size = 26;

int randompull1 = rand() % player1size;
int randompull2 = rand() % player2size;

int c1 = player1[randompull1];
int c2 = player2[randompull2];

int i;

for (i = randompull1; i < player1size - 1; i++){
	player1[i] = player1[i+1];
}
player1size --;

for (i = randompull2; i < player2size -1; i++){
	player2[i] = player2[i+1];
}
player2size--; 

player1[player1size++] = c1;
player2[player2size++] = c2;

return 0;
}
