#include<stdio.h>
#include<conio.h>

int main ()
{
	int n;
	float q;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	q=n*n;
	printf("O quadrado deste numero eh: %.2f", q);
	
	getch ();
	return 0;
}

