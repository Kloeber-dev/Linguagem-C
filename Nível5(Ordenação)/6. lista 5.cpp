#include<stdio.h>
#include<conio.h>
#include <math.h>
int main ()
{
	int a[30], b[30], i, pesq, acha=0, j;
	printf ("Digite os Valores do Vetor A: ");
	
	for (i=0; i<30; i++)
	{
		scanf ("%d", &a[i]);
	}
	printf ("Os Valores Elevados Ao Cubo sao: ");
	
	for (i=0; i<30; i++)
	{
		b[i]=pow(a[i], 3);
		printf ("%d, ", b[i]);
	}
	printf ("\n\n\t############ P E S Q U I S A ############\n");
	printf ("Digite o Item Que Deseja Pesquisar: ");
	scanf ("%d", &pesq);
	
	i=0;
	while((acha==0)&&(i<30))
	{
		if (b[i]==pesq)
	
			acha=1;
			else
			i++;
	}
	if (acha==1){
		printf ("O VALOR %d FOI ENCONTRADO NA POSICAO %d", pesq, i);
	}
	else 
	printf ("VALOR NAO ENCONTRADO :(");
	
	getch ();
	return 0;
}

