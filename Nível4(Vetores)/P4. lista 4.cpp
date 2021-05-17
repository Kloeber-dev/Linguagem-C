#include <stdio.h>
#include <conio.h>

int main ()
{
	int a[5], b[5], C[10], i;
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
	for (i=0; i<10; i++)
	{
		if (i<5)
		{
			C[i]=a[i];
		}
		else { C[i]=b[i-5];
		}
		
		printf ("Resultado: %d\n", C[i]);
	}
	getch ();
	return 0;
}
