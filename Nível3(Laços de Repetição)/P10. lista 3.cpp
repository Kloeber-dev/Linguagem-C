#include <stdio.h>
#include <conio.h>

int main ()
{
	int k=1, b=0;
	do{
		if (k%2==0)
		b=b+k;
		k++;
		
		printf ("%d\n", b);
	}
	while (k<=500);
	
	getch ();
	return 0;
}

