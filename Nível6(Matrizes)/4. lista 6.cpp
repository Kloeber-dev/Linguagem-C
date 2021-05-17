#include<stdio.h>
#include<conio.h>

int main ()
{
	int a[4], b[4], c[4][2], i, j;
	for (i=0; i<=3; ++i)
	{
		printf ("Digite Os Elementos de A: ");
		scanf ("%d", &a[i]);
	}
	
	for (i=0; i<4; ++i)
	{
		printf ("Digite Os Elementos de B: ");
		scanf ("%d", &b[i]);
	}
	
	for (i=0; i<4; ++i)
	{
		c[i][0]=a[i]*2;
		c[i][1]=b[i]-5;
	}
	for (j=0; j<2; ++j)
	for (i=0; i<4; ++i)
	{
		printf ("\n\nA Matriz C [%d][%d] eh: %d", (i+1), (j+1), c[i][j]);
	}

	getch ();
	return 0;
}

