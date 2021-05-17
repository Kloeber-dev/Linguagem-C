#include <stdio.h>
#include <conio.h>

int main ()
{
	int a[12], b[12], c[12], j, i, x, g;
	printf ("Digite os Valores do Vetor A: \n");
	for (i=0; i<12; i++)
	{
		scanf ("%d", &a[i]);
	}
	for (i=0; i<11; i++)
	for (j=i+1; j<12; j++)
	{
		if (a[i]>a[j])
		{
			x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
	}
	printf ("Os Valores de A em Ordem Crescente sao:");
	for (i=0; i<12; ++i)
	{
		printf ("%d\n", a[i]);
	}
	
	printf ("Digite os Valores do Vetor B: \n");
	for (i=0; i<12; i++)
	{
		scanf ("%d", &b[i]);
	}
	for (i=0; i<11; i++)
	for (j=i+1; j<12; j++)
	{
		if (b[i]>b[j])
		{
			g=b[i];
			b[i]=b[j];
			b[j]=g;
		}
	}
	printf ("Os Valores de B em Ordem Crescente sao:");
	for (i=0; i<12; ++i)
	{
		printf ("%d\n", b[i]);
	}
	
	for (i=0; i<12; ++i)
	{
		c[i]=a[i]+b[i];
	}
	for (i=0; i<11; i++)
	for (j=i+1; j<12; j++)
	{
		if (c[i]>c[j])
		{
			g=c[i];
			c[i]=c[j];
			c[j]=g;
		}
	}
	printf ("Os Valores de C em Ordem Crescente sao:");
	for (i=0; i<12; i++)
	{
		printf ("%d\n", c[i]);
	}
	getch ();
	return 0;
}
