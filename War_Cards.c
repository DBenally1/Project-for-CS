/************************************************************************
File: War_Cards
Author: Ana Pumarino
Purpose: This program creates the cards for our game.
Version: 1.0 March 12th, 2026
Resources: N/A
************************************************************************/

#include <stdio.h>
int main()
{
	back();

	dk();
	hk();
	ck();
	sk();

	dq();
	hq();
	cq();
	sq();

	dj();
	hj();
	cj();
	sj();

	d9();
	h9();
	c9();
	s9();

	d8();
	h8();
	c8();
	s8();
	
	d7();
	h7();
	c7();
	s7();

	d6();
	h6();
	c6();
	s6();

	d5();
	h5();
	c5();
	s5();

	d4();
	h4();
	c4();
	s4();

	d3();
	h3();
	c3();
	s3();

	d2();
	h2();
	c2();
	s2();

	da();
	ha();
	ca();
	sa();
return 0;
}

int back()
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
return 0;
}

int dk()
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
return 0;
}

int hk()
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
return 0;
}

int ck()
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
return 0;
}

int sk()
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
return 0;
}

int dq()
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
return 0;
}

int hq()
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
return 0;
}

int cq()
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
return 0;
}

int sq()
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
return 0;
}

int dj()
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
return 0;
}

int hj()
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
return 0;
}

int cj()
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
return 0;
}
      
int sj()
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
return 0;
}

int d9()
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
return 0;
}

int h9()
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
return 0;
}

int c9()
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
return 0;
}

int s9()
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
return 0;
}

int d8()
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
return 0;
}

int h8()
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
return 0;
}

int c8()
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
return 0;
}

int s8()
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
return 0;
}

int d7()
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
return 0;
}

int h7()
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
return 0;
}

int c7()
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
return 0;
}

int s7()
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
return 0;
}

int d6()
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
return 0;
}

int h6()
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
return 0;
}

int c6()
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
return 0;
}

int s6()
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
return 0;
}

int d5()
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
return 0;
}

int h5()
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
return 0;
}

int c5()
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
return 0;
}

int s5()
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
return 0;
}

int d4()
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
return 0;
}

int h4()
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
return 0;
}

int c4()
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
return 0;
}

int s4()
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
return 0;
}

int d3()
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
return 0;
}

int h3()
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
return 0;
}

int c3()
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
return 0;
}

int s3()
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
return 0;
}

int d2()
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
return 0;
}

int h2()
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
return 0;
}

int c2()
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
return 0;
}

int s2()
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
return 0;
}

int da()
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
return 0;
}

int ha()
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
return 0;
}

int ca()
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
return 0;
}

int sa()
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
return 0;
}

