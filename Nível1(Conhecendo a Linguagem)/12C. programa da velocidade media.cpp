#include<stdio.h>
#include<conio.h>

int main()
{
	float de, dt, vm, sf, si, tf, ti;
	printf("Digite O Espaço Inicial do Corpo: ");
	scanf("%f", &si);
	printf("Digite o Espaço Final do Corpo: ");
	scanf("%f", &sf);
	printf("Digite o Tempo Inicial do Corpo: ");
	scanf("%f", &ti);
	printf("Digite o Tempo Final do Corpo: ");
	scanf("%f", &tf);
	dt=tf-ti;
	de=sf-si;
	vm=de/dt;
	printf("A Velocidade Media eh: %.3f", vm);
	
	getch();
	return 0;
}

