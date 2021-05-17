#include<stdio.h>
#include<conio.h>

int main ()
{
	int a[7], b[7], c[7][2], i, j;
	for (i=0; i<7; i++)
	{
		printf ("Digite o Elemento %d da Matriz A: ", (i+1));
		scanf ("%d", &a[i]);
		
	}
	for (i=0; i<7; i++)
	{printf ("Digite o Elemento %d da Matriz B: ", (i+1));
		scanf ("%d", &b[i]);}
	
	for (i=0; i<=6; ++i)
		{
		c[i][0]=a[i];
		c[i][1]=b[i];
	 }
	
	for (i=0; i<=1; i++)
	for (j=0; j<=6; j++)
	{printf ("\nA MATRIZ C[%d][%d] EH: %d", (j+1), (i+1), c[j][i]);}
	
	getch ();
	return 0;
}

