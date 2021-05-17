#include <stdio.h>
#include <conio.h>

int main ()
{
	int a[15], b[15], i, j, c, x;
	printf ("Digite Os Valores do Vetor A: \n");
	
	for (i=0; i<15; ++i){
	scanf ("%d", &a[i]);}
	
	for (c=0; c<=14; c++)
	{
		for(b[c] = 1; a[c] > 1; a[c]--){
			b[c] = b[c] * a[c];}
	}
	printf ("Os Valores Em Ordem Crescente sao: ");
	
	for (i=0; i<14; i++)
	for (j=i+1; j<=14; j++)
	if (b[i]>b[j])
	{
		x=b[i];
		b[i]=b[j];
		b[j]=x;
	}
	for (i=0; i<15; i++)
	{
		printf ("\n%d", b[i]);
	}
	
	
	getch ();
	return 0;
}
