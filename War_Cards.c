/************************************************************************
File: War_Cards
Author: Ana Pumarino
Purpose: This program creates the cards for our game.
Version: 1.0 March 12th, 2026
Resources: N/A
************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "split_assign.h"

void back(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m# # # # # # # # #\033[0m│\n");
        printf ("│\033[0;31m# # # # # # # # #\033[0m│\n");
        printf ("│\033[0;31m# # # # # # # # #\033[0m│\n");
        printf ("│\033[0;31m# # # # # # # # #\033[0m│\n");
        printf ("│\033[0;31m+ # + # + # + # +\033[0m│\n");
        printf ("│\033[0;31m+ + + + + + + + +\033[0m│\n");
        printf ("│\033[0;31m+ + + + + + + + +\033[0m│\n");
        printf ("│\033[0;31m+ + + + + + + + +\033[0m│\n");
        printf ("│\033[0;31m- + - + - + - + -\033[0m│\n");
        printf ("│\033[0;31m- - - - - - - - -\033[0m│\n");
        printf ("│\033[0;31m- - - - - - - - -\033[0m│\n");
	printf ("│\033[0;31m- - - - - - - - -\033[0m│\n");
	printf ("│\033[0;31m. . . . . . . . .\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void dk(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31mK\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31mK\033[0m        │\n");
        printf ("│       \033[0;31mK K\033[0m       │\n");
        printf ("│      \033[0;31mK   K\033[0m      │\n");
        printf ("│     \033[0;31mK     K\033[0m     │\n");
        printf ("│      \033[0;31mK   K\033[0m      │\n");
        printf ("│       \033[0;31mK K\033[0m       │\n");
        printf ("│        \033[0;31mK\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31mK\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void hk(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31mK\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31mK    K\033[0m     │\n");
        printf ("│     \033[0;31mK K  K K\033[0m    │\n");
        printf ("│    \033[0;31mK   K   K\033[0m    │\n");
        printf ("│     \033[0;31mK     K\033[0m     │\n");
        printf ("│      \033[0;31mK   K\033[0m      │\n");
        printf ("│       \033[0;31mK K\033[0m       │\n");
        printf ("│        \033[0;31mK\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31mK\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");

}

void ck(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│K                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│       KKK       │\n");
        printf ("│     K     K     │\n");
        printf ("│    KK     KK    │\n");
        printf ("│  K           K  │\n");
        printf ("│  K    K K    K  │\n");
        printf ("│    KK  K  KK    │\n");
        printf ("│        K        │\n");
        printf ("│                 │\n");
        printf ("│                K│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void sk(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│K                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│        K        │\n");
        printf ("│       K K       │\n");
        printf ("│      K   K      │\n");
        printf ("│     K     K     │\n");
        printf ("│    K  K K  K    │\n");
        printf ("│     K  K  K     │\n");
        printf ("│        K        │\n");
        printf ("│                 │\n");
        printf ("│                K│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void dq(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31mQ\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31mQ\033[0m        │\n");
        printf ("│       \033[0;31mQ Q\033[0m       │\n");
        printf ("│      \033[0;31mQ   Q\033[0m      │\n");
        printf ("│     \033[0;31mQ     Q\033[0m     │\n");
        printf ("│      \033[0;31mQ   Q\033[0m      │\n");
        printf ("│       \033[0;31mQ Q\033[0m       │\n");
        printf ("│        \033[0;31mQ\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31mQ\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void hq(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31mQ\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31mQ    Q\033[0m     │\n");
        printf ("│     \033[0;31mQ Q  Q Q\033[0m    │\n");
        printf ("│    \033[0;31mQ   Q   Q\033[0m    │\n");
        printf ("│     \033[0;31mQ     Q\033[0m     │\n");
        printf ("│      \033[0;31mQ   Q\033[0m      │\n");
        printf ("│       \033[0;31mQ Q\033[0m       │\n");
        printf ("│        \033[0;31mQ\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31mQ\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void cq(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│Q                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│       QQQ       │\n");
        printf ("│     Q     Q     │\n");
        printf ("│    QQ     QQ    │\n");
        printf ("│  Q           Q  │\n");
        printf ("│  Q    Q Q    Q  │\n");
        printf ("│    QQ  Q  QQ    │\n");
        printf ("│        Q        │\n");
        printf ("│                 │\n");
        printf ("│                Q│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void sq(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│Q                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│        Q        │\n");
        printf ("│       Q Q       │\n");
        printf ("│      Q   Q      │\n");
        printf ("│     Q     Q     │\n");
        printf ("│    Q  Q Q  Q    │\n");
        printf ("│     Q  Q  Q     │\n");
        printf ("│        Q        │\n");
        printf ("│                 │\n");
        printf ("│                Q│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void dj(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31mJ\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
	printf ("│        \033[0;31mJ\033[0m        │\n");
        printf ("│       \033[0;31mJ J\033[0m       │\n");
        printf ("│      \033[0;31mJ   J\033[0m      │\n");
        printf ("│     \033[0;31mJ     J\033[0m     │\n");
        printf ("│      \033[0;31mJ   J\033[0m      │\n");
        printf ("│       \033[0;31mJ J\033[0m       │\n");
        printf ("│        \033[0;31mJ\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31mJ\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void hj(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31mJ\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
	printf ("│      \033[0;31mJ    J\033[0m     │\n");
        printf ("│     \033[0;31mJ J  J J\033[0m    │\n");
        printf ("│    \033[0;31mJ   J   J\033[0m    │\n");
        printf ("│     \033[0;31mJ     J\033[0m     │\n");
        printf ("│      \033[0;31mJ   J\033[0m      │\n");
        printf ("│       \033[0;31mJ J\033[0m       │\n");
        printf ("│        \033[0;31mJ\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31mJ\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void cj(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│J                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│       JJJ       │\n");
        printf ("│     J     J     │\n");
        printf ("│    JJ     JJ    │\n");
        printf ("│  J           J  │\n");
        printf ("│  J    J J    J  │\n");
        printf ("│    JJ  J  JJ    │\n");
        printf ("│        J        │\n");
        printf ("│                 │\n");
        printf ("│                J│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}
      
void sj(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│J                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│        J        │\n");
        printf ("│       J J       │\n");
        printf ("│      J   J      │\n");
        printf ("│     J     J     │\n");
        printf ("│    J  J J  J    │\n");
        printf ("│     J  J  J     │\n");
        printf ("│        J        │\n");
        printf ("│                 │\n");
        printf ("│                J│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void d9(void)
{
	printf ("┌─────────────────┐\n");
	printf ("│\033[0;31m9\033[0m                │\n");
	printf ("│\033[0;31m♦\033[0m                │\n");
	printf ("│                 │\n");
	printf ("│                 │\n");
	printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
	printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
	printf ("│        \033[0;31m♦\033[0m        │\n");
	printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
	printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
	printf ("│                 │\n");
	printf ("│                 │\n");
	printf ("│                \033[0;31m9\033[0m│\n");
	printf ("│                \033[0;31m♦\033[0m│\n");
	printf ("└─────────────────┘\n");
}

void h9(void)
{
	printf ("┌─────────────────┐\n");
	printf ("│\033[0;31m9\033[0m                │\n");
	printf ("│\033[0;31m♥\033[0m                │\n");
	printf ("│                 │\n");
	printf ("│                 │\n");
	printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
	printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
	printf ("│        \033[0;31m♥\033[0m        │\n");
	printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
	printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
	printf ("│                 │\n");
	printf ("│                 │\n");
	printf ("│                \033[0;31m9\033[0m│\n");
	printf ("│                \033[0;31m♥\033[0m│\n");
	printf ("└─────────────────┘\n");
}

void c9(void)
{
	printf ("┌─────────────────┐\n");
	printf ("│9                │\n");
	printf ("│♣                │\n");
	printf ("│                 │\n");
	printf ("│                 │\n");
	printf ("│      ♣   ♣      │\n");
	printf ("│      ♣   ♣      │\n");
	printf ("│        ♣        │\n");
	printf ("│      ♣   ♣      │\n");
	printf ("│      ♣   ♣      │\n");
	printf ("│                 │\n");
	printf ("│                 │\n");
	printf ("│                9│\n");
	printf ("│                ♣│\n");
	printf ("└─────────────────┘\n");
}

void s9(void)
{
	printf ("┌─────────────────┐\n");
	printf ("│9                │\n");
	printf ("│♠                │\n");
	printf ("│                 │\n");
	printf ("│                 │\n");
	printf ("│      ♠   ♠      │\n");
	printf ("│      ♠   ♠      │\n");
	printf ("│        ♠        │\n");
	printf ("│      ♠   ♠      │\n");
	printf ("│      ♠   ♠      │\n");
	printf ("│                 │\n");
	printf ("│                 │\n");
	printf ("│                9│\n");
	printf ("│                ♠│\n");
	printf ("└─────────────────┘\n");
}

void d8(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m8\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m8\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void h8(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m8\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m8\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void c8(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│8                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│        ♣        │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│        ♣        │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                8│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void s8(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│8                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│        ♠        │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│        ♠        │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                8│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void d7(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m7\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
	printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
	printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
	printf ("│                 │\n");
        printf ("│                \033[0;31m7\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void h7(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m7\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m7\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void c7(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│7                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│        ♣        │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                7│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void s7(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│7                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│        ♠        │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                7│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void d6(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m6\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m6\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void h6(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m6\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m6\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void c6(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│6                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                6│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void s6(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│6                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                6│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void d5(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m5\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m5\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void h5(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m5\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m5\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void c5(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│5                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│        ♣        │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                5│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void s5(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│5                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│        ♠        │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                5│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void d4(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m4\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m4\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void h4(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m4\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m4\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void c4(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│4                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♣   ♣      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                4│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void s4(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│4                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                4│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void d3(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m3\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m3\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void h3(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m3\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m3\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void c3(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│3                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        ♣        │\n");
        printf ("│                 │\n");
        printf ("│        ♣        │\n");
        printf ("│                 │\n");
        printf ("│        ♣        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                3│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void s3(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│3                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        ♠        │\n");
        printf ("│                 │\n");
        printf ("│        ♠        │\n");
        printf ("│                 │\n");
        printf ("│        ♠        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                3│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void d2(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m2\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m2\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void h2(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31m2\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31m2\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void c2(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│2                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        ♣        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        ♣        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                2│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void s2(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│2                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        ♠        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│        ♠        │\n");
        printf ("│                 │\n");
        printf ("│                 │\n");
        printf ("│                2│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

void da(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31mA\033[0m                │\n");
        printf ("│\033[0;31m♦\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│       \033[0;31m♦ ♦\033[0m       │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│     \033[0;31m♦     ♦\033[0m     │\n");
        printf ("│      \033[0;31m♦   ♦\033[0m      │\n");
        printf ("│       \033[0;31m♦ ♦\033[0m       │\n");
        printf ("│        \033[0;31m♦\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31mA\033[0m│\n");
        printf ("│                \033[0;31m♦\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void ha(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│\033[0;31mA\033[0m                │\n");
        printf ("│\033[0;31m♥\033[0m                │\n");
        printf ("│                 │\n");
        printf ("│      \033[0;31m♥    ♥\033[0m     │\n");
        printf ("│     \033[0;31m♥ ♥  ♥ ♥\033[0m    │\n");
        printf ("│    \033[0;31m♥   ♥   ♥\033[0m    │\n");
        printf ("│     \033[0;31m♥     ♥\033[0m     │\n");
        printf ("│      \033[0;31m♥   ♥\033[0m      │\n");
        printf ("│       \033[0;31m♥ ♥\033[0m       │\n");
        printf ("│        \033[0;31m♥\033[0m        │\n");
        printf ("│                 │\n");
        printf ("│                \033[0;31mA\033[0m│\n");
        printf ("│                \033[0;31m♥\033[0m│\n");
        printf ("└─────────────────┘\n");
}

void ca(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│A                │\n");
        printf ("│♣                │\n");
        printf ("│                 │\n");
        printf ("│       ♣♣♣       │\n");
        printf ("│     ♣     ♣     │\n");
        printf ("│    ♣♣     ♣♣    │\n");
        printf ("│  ♣           ♣  │\n");
        printf ("│  ♣    ♣ ♣    ♣  │\n");
        printf ("│    ♣♣  ♣  ♣♣    │\n");
        printf ("│        ♣        │\n");
        printf ("│                 │\n");
        printf ("│                A│\n");
        printf ("│                ♣│\n");
        printf ("└─────────────────┘\n");
}

void sa(void)
{
        printf ("┌─────────────────┐\n");
        printf ("│A                │\n");
        printf ("│♠                │\n");
        printf ("│                 │\n");
        printf ("│        ♠        │\n");
        printf ("│       ♠ ♠       │\n");
        printf ("│      ♠   ♠      │\n");
        printf ("│     ♠     ♠     │\n");
        printf ("│    ♠  ♠ ♠  ♠    │\n");
        printf ("│     ♠  ♠  ♠     │\n");
        printf ("│        ♠        │\n");
        printf ("│                 │\n");
        printf ("│                A│\n");
        printf ("│                ♠│\n");
        printf ("└─────────────────┘\n");
}

