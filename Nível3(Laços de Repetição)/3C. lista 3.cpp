#include<stdio.h>
#include<conio.h>

int main ()
{
	int a;
	a=1;
	while (a<=20)
	{
		if (a%2==0)
		{
			printf ("%d eh um numero par! \n \n" , a);
		}
		else
		{
			printf ("%d eh um numero impar! \n \n", a);
		}
		a++;
	}
	getch ();
	return 0;
}

