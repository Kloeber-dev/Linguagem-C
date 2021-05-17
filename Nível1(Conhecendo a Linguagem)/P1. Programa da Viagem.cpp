#include<stdio.h>
#include<conio.h>

int main()
{
    float d, t, v, lt;
    printf("Digite o tempo gasto da viagem: ");
    scanf("%f", &t);
    printf("Digite a velocidade media: ");
    scanf("%f", &v);
    d=t*v;
    lt=d/12;
    printf("A velocidade media eh: %.2f", v);
	printf("\nO tempo gasto da viagem eh: %.2f", t);
	printf( "\na distancia percorrida eh: %.2f", d);
	( "\nE a quantidade de litros usados eh: %.2f", lt);
    
    getch ();
    return 0;
}
