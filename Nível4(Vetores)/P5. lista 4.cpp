#include <stdio.h>
#include <conio.h>

int main ()
{
	int a[20], b[30], C[50], i;
	for (i=0; i<20; i++)
	{
	printf ("Digite os Valores do Vetor A: \n");
	scanf ("%d", &a[i]);
	}
	for (i=0; i<30; i++)
	{
	printf ("Digite os Valores do Vetor B: \n");
	scanf ("%d", &b[i]);
	}
	for (i=0; i<50; i++)
	{
		if (i<20)
		{
			C[i]=a[i];
		}
		else { C[i]=b[i-20];
		}
		
		printf ("Valores Armazenados: %d\n", C[i]);
	}
	getch ();
	return 0;
}
