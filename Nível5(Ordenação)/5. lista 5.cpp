#include <stdio.h>
#include <conio.h>

int main ()
{
	int a[20], b[30], c[50], i, j, x;
	printf ("Digite Os Valores do Vetor A: ");
	for (i=0; i<20; ++i)
	{
		scanf ("%d", &a[i]);
	}
	printf ("Digite Os Valores do Vetor B: ");
	for (i=0; i<30; ++i)
	{
		scanf ("%d", &b[i]);
	}
	for (i=0; i<50; ++i)
	{
		if (i<20){
		c[i]=a[i];}
		else 
		c[i]=b[i-20];
	}
	for (i=0; i<49; ++i)
	for (j=i+1; j<50; ++j)
	{
		if (c[i]<c[j])
		{
			x=c[i];
			c[i]=c[j];
			c[j]=x;
		}
	}
	printf ("Os Valores Em Ordem Decrescente: ");
	for (i=0; i<50; ++i)
	{
		printf ("%d\n", c[i]);
	}
	
}
