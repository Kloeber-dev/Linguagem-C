#include <stdio.h>
#include <conio.h>

int main ()
{
	int a[5], b[5], C[5], i;
	for (i=0; i<5; i++)
	{
	printf ("Digite os Valores do Vetor A: \n");
	scanf ("%d", &a[i]);
	}
	for (i=0; i<5; i++)
	{
	printf ("Digite os Valores do Vetor B: \n");
	scanf ("%d", &b[i]);
	}
	for (i=0; i<5; i++)
	{
		C[i]=a[i]-b[i];
		printf ("Resultado: %d\n", C[i]);
	}
	getch ();
	return 0;
}
