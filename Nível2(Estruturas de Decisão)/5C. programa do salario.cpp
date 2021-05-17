#include<stdio.h>
#include<conio.h>

int main ()
{
	float sb, sl, hrs, adc;
	printf ("Digite o Salario Bruto: ");
	scanf ("%f", &sb);
	printf ("Digite a Quantidade de Horas Trabalhadas: ");
	scanf ("%f", &hrs);
	if (hrs>160)
	{
		hrs=(hrs-160);
		adc=(sb/160)+(hrs*0.50);
		sb=(adc+sb);
			if (sb<800.00)
	
				sl=sb;
				printf ("O Salario Lqiuido eh: %.2f", sl);
	}
			else 
			if ((sb<=800.00)&&(sb<=1600.00))
	{
	sl=(sb-(sb*0.13));
	printf ("O Salario Liquido eh: %.2f", sl);
	}
 	else
	{
	sl=(sb-(sb*0.22));
	printf ("O Salario Liquido eh: %.2f", sl);
	}

	getch ();
	return 0;
}

