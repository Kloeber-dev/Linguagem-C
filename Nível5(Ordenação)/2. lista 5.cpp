#include <stdio.h>
#include <conio.h>

int main ()
{
	int a[8], b[8], i, j, x, acha=0, pesq, c=0;
	printf ("Digite os valores do Vetor A: ");
	for (i=1; i<=8; ++i)
	{
		scanf ("%d", &a[i]);
	}
	for (i=1; i<=8;++i)
	{
		b[i]=a[i]*5;
	}
	for (i=1; i<=7; ++i)
	for (j=i+1; j<=8; ++j)
	{
	if (b[i]>b[j])
	{
		x=b[i];
		b[i]=b[j];
		b[j]=x;
	}}
	
	printf ("Os Valores Multiplicados em Ordem Crescente sao: ");
	for (i=1; i<=8; ++i){
	printf ("\n%d ", b[i]);
	}
	
	
	printf ("\n############ PESQUISA ############");
	printf ("\nDigite o Numero que deseja pesquisar: \n");
	
		scanf ("%d", &pesq);

	while ((c<=8)&&(acha==0))
	{
		if (pesq==b[c])
			acha=1;
		else 
		++c;}
	if (acha==1)
	{
	printf ("Achou %d na posicao %d", pesq, c );
	}
	else 
	printf ("O Numero Nao Foi ENCONTRADO!!");
	
	getch ();
	return 0;
}
