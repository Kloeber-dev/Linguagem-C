#include<stdio.h>
#include<conio.h>

int main ()
{
	float nota, resto;
	printf ("Digite o a nota do aluno: ");
	scanf ("%f", &nota);
	resto=((int)(nota*100)%100);
	if (resto>=50)
	{
		nota=(nota-(resto/100)+1);
	}
	else
	{
		nota=(nota-(resto/100));
	}
	printf ("A Nota Do Aluno eh: %.0f", nota);
	
	getch ();
	return 0;
}

