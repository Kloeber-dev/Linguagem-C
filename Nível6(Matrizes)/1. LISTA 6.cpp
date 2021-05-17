#include<stdio.h>
#include<conio.h>

int main ()
{
	int a[5][3],b[5][3], c[5][3], i, j;
	printf ("Digite Os Valores Da Matriz A: ");
	for (i=0; i<5; i++)
	for (j=0; j<3; j++)
	{
		scanf ("%d", &a[i][j]);
	}
	printf ("Digite Os Valores Da Matriz B: ");
	for (i=0; i<5; i++)
	for (j=0; j<3; j++)
	{
		scanf ("%d", &b[i][j]);
		
	}
	for (i=0; i<5; i++)
	for (j=0; j<3; j++)
	{c[i][j]=a[i][j]+b[i][j];
		printf ("\nA Matriz C eh: %d", c[i][j]);}
	
	getch ();
	return 0;
}

