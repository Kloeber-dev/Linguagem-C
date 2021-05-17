#include <stdio.h>
#include <locale.h>

int calculo(float v, float tx, float tp);

int main(){ float v, tx, tp;
	printf ("Digite o Valor: ");
	scanf ("%f", &v);
	printf ("Digite a Taxa: ");
	scanf ("%f", &tx);
	printf ("Digite o Tempo: ");
	scanf ("%f", &tp);
	calculo (v,tx,tp);
}

int calculo (float v, float tx,float tp){ 
	setlocale(LC_ALL, "portuguese");
	float p;
	p=v+(v*(tx/100)*tp);
	printf("O Valor da Prestação é: %.2f", p);
}
