#include <stdio.h>
#include <locale.h>

int calculo(float pv, float ptx, float ptp);

int main(){
	float v, tx, tp;
	printf("Digite o Valor: ");
	scanf ("%f", &v);
	printf ("Digite a Taxa: ");
	scanf ("%f", &tx);
	printf ("Digite o Tempo: ");
	scanf ("%f", &tp);
	
	float *pv=&v;
	float *ptx=&tx;
	float *ptp=&tp;
	calculo (*pv, *ptx, *ptp);
}

int calculo (float pv,float ptx,float ptp){
	setlocale (LC_ALL, "portuguese");
	float pts;
	pts=pv+(pv*(ptx/100)*ptp);
	printf ("O Valor da Prestação é: %.2f", pts);
}
