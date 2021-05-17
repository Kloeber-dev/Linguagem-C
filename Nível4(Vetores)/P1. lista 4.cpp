#include <stdio.h>
#include <conio.h>

int main ()

{
	int A[5], B[5], c=0;
	for (c=0; c<5; c++)
	{
		printf ("Digite os Valores do Vetor A: \n");
		scanf ("%d", &A[c]);
	}
	for (c=0; c<5; c++)
	{
		B[c]=A[c]*3;
		printf ("Os Valores de B Sao: %d\n", B[c]);
	}
	getch ();
	return 0;
}
