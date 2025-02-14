#include <stdio.h>
int stat;
int powre(int B, int n);
int main() {

	int x, y;
	x = 5;
	y = 3;
	//a^2 + 2ab + b^2 
	int ppp = powre(y , 2);
	int p = powre(x, 2);
	int pp = (2 * (x * y));
	int rectongle = ((5 * 5) + (2 * (x * y)) + (3 * 3));
	printf(" %d +  %d  +  %d : %d \n", p , pp , ppp , rectongle);
	printf("Number Is : ");
	for (int  i = 1; i  < 9;++i)
		if (i > 2) {

		if ((rectongle % i) == 0) {
	     	printf(" %d ", i);
     	}
	    else {
		  //printf(" not return Mod %d \n", rectongle);
	    }
	  }

	return stat;
}

int powre(int B,int n)
{
	int p;
	for (p = 1; n > 0; --n) p = p * B;
	return p;
}
