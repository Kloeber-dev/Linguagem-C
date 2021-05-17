#include<stdio.h>
#include <locale.h>
#include <conio.h>

int soma(int num);

int main (){setlocale (LC_ALL, "portuguese");
	int num;
	printf ("Digite o Número: ");
	scanf ("%d", &num);
	soma(num);
	}
	
	int soma (int num){
		int a, b=0;
			for (a=1; a<=num;a++)
			{
			b=a+b;
			}
			
		printf ("%d", b);
		getch();
	}
