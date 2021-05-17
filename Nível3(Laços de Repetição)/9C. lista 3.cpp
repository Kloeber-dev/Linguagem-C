#include<stdio.h>
#include<conio.h>

int main ()
{
	int a;
	a=1;
	do
	{
		if (a%2==0)
		{
		printf ("%d eh um numero par! \n", a);}
		else 
		{printf ("%d eh um numero impar! \n", a);}
		a++;
	}
	while (a<=20);
	getch ();
	return 0;
}

