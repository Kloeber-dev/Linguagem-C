#include<stdio.h>
#include<conio.h>

int main ()
{
	int nr_coelhos;
	float custo;
	printf("Digite a quantidade de coelhos:");
	scanf("%d", &nr_coelhos);
	custo=(nr_coelhos*0.70)/18+10;
	printf("com %d coelhos, o valor do custo sera de: %.2f" , nr_coelhos , custo);
	
	getch();
	return 0;
}
