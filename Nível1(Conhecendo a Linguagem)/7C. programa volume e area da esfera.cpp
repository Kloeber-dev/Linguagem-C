#include<stdio.h>
#include<conio.h>

int main()

{
	float a, v, r;
	printf("Digite o Raio da Esfera: ");
	scanf("%f", &r);
	v=(4*3.1416*(r*r*r))/3;
	a=4*3.1416*(r*r);
	printf("O Volume da Esfera eh: %.3f", v);
	printf("\nA Area da Esfera eh: %.3f", a);
	
	getch();
	return 0;
}

