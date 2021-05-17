#include<stdio.h>
#include<conio.h>

int main ()
{
	int a[20], b[20], i, j, x, pesq, acha=0;
	for (i=1; i<=20; i++)
	{printf ("Digite o %d Elemento: ", i);
	scanf ("%d", &a[i]);
	}
	for (i=1; i<=20; i++)
	{
		b[i]=a[i]+2;
	}
	for (i=1; i<=19; i++)
	for (j=i+1; j<=20; j++)
		if (b[i]>b[j]){
			x=b[i];
			b[i]=b[j];
			b[j]=x;
		}
	printf ("Os Elementos Em Ordem Crescente sao: ");
	for (i=1; i<=20; i++)
	{
		printf("%d\n", b[i]);
	}
	printf ("\n\n\t############ P E S Q U I S A ############\n");
	printf ("Digite O Elemento que Deseja Encontrar: ");
	scanf ("%d", &pesq);
	i=0;
	while ((i<=20) && (acha==0))
	{
		if (pesq==b[i])
		acha=1;
		else
		++i;
	}
	if (acha==1)
	printf ("O ELEMENTO %d FOI ENCONTRADO NA POSICAO %d", pesq, i);
	else 
	printf ("ELEMENTO NAO FOI ENCONTRADO :(");
	
	getch ();
	return 0;
}

