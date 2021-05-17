#include<stdio.h>
#include<conio.h>

int main ()
{
	int a[10], b[10], c, i;
	for (c=0; c<10; c++)
	{
		printf ("Insira os Valores do Vetor A: \n");
		scanf ("%d", &a[c]);
	}
	for (c=0, i=9; c<10, i>=0; c++, i--)
	{
		b[c]=a[i];
		printf ("Valores: %d\n", b[c]);
	}
	getch ();
	return 0;
}

