#include<stdio.h>
#include<conio.h>
#include <math.h>

int main ()
{
	int a[10],b[10][3], i, j;
	for (i=0; i<10; ++i)
	{
		printf ("Digite Os Valores de A: ");
		scanf ("%d", &a[i]);
	}
	
	for (i=0; i<10; ++i)
	{
		b[i][0]=a[i]+5;
		b[i][2]=pow(a[i], 2);
		for (b[i][1]=1; a[i]>1; a[i]--)
		{
			b[i][1]=b[i][1]*a[i];
		}
	}

	for (i=0; i<3; ++i)
	for (j=0; j<10; ++j)
	{
		printf ("\nA Matriz B[%d][%d] eh: %d", (j+1), (i+1), b[j][i]);
	}
	
	getch ();
	return 0;
}

