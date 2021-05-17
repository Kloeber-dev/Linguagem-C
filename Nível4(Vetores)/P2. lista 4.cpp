#include <stdio.h>
#include <conio.h>

int main ()
{
	int a[6], b[6], c;
	for (c=0; c<6; c++)
	{
		printf ("Digite o Valor dos Vetores de A: \n");
		scanf ("%d", &a[c]);
	}
	for (c=0; c<6; c++)
	{
		for(b[c] = 1; a[c] > 1; a[c] = a[c] - 1){
b[c] = b[c] * a[c];}

printf ("Os Fatoriais dos Valores sao: %d\n", b[c]);
	}
	getch ();
	return 0;
}

