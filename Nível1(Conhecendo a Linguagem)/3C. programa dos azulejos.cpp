#include <stdio.h>
#include <conio.h>

int main ()
{
	float La, Aa, Lp, Ap, R1, R2;
	printf("Digite a largura do Azulejo em cm:");
	scanf("%f", &La);
	printf("Digite a altura do Azulejo em cm:");
	scanf("%f", &Aa);
	printf("Digite a Largura da parede em m:");
	scanf("%f", &Lp);
	printf("Digite a Altura da Parede em m:");
	scanf("%f", &Ap);
	La=La/100;
	Aa=Aa/100;
	R1=La*Aa;
	R2=Lp*Ap;
	R2=R2/R1;
	printf("A quantidade de azulejos necessaria eh: %.2f", R2);
	
	getch ();
	return 0;
}
