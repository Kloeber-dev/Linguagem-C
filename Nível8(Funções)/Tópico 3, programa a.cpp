#include<stdio.h>
#include <locale.h>
#include <conio.h>

int soma(int pnum);

int main (){setlocale (LC_ALL, "portuguese");
	int num;
	printf ("Digite o N�mero: ");
	scanf ("%d", &num);
	int *pnum=&num;
	soma(*pnum);
	}
	
	int soma (int pnum){
		int a, b=0;
			for (a=1; a<=pnum;a++)
			{
			b=a+b;
			}
			
		printf ("%d", b);
		getch();
	}
