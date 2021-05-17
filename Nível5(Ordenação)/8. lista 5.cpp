#include<stdio.h>
#include<conio.h>

int main ()
{
	float a[40], pesq, x;
	int i, j, acha=0;
	for (i=1; i<=40; i++)
	{
		printf ("Digite a Nota do Aluno No %d:  ", i);
		scanf ("%f", &a[i]);
	}
	
	for (i=0; i<39; i++)
	for (j=i+1; j<40; j++)
	if (a[i]>a[j])
	{x=a[i];
	a[i]=a[j];
	a[j]=x;}
	
	printf("NOTAS EM ORDEM CRESCENTE");
	for (i=0; i<40; i++)
	{
		printf ("\n%.2f", a[i]);
	}
	
	printf ("\n\n\t############ P E S Q U I S A ############\n");
	printf ("Digite A Nota A Ser Encontrada: ");
	scanf ("%f", &pesq);
	
	i=0;
	while ((acha==0)&&(i<40))
	{
		if (pesq==a[i])
		acha=1;
		else
		i++;	
		}
	if (acha==1)
	printf ("NOTA %.2f ENCONTRADA NA POSICAO %d", pesq, i);
	else
	printf ("NOTA NAO ENCONTRADA!!");
	
	
	getch ();
	return 0;
}

