#include <stdio.h>
#include <locale.h>

int leita(int n, int a[30]);
int leitb(int n, int b[30]);
int jun(int n, int a[30], int b[30], int p, int c[60]);
int exb(int p, int c[60]);

int main (){ 
	int a[30], b[30], c[60], n=30, p=60;
	leita(30, a);
	leitb(30, b);
	jun(30, a, b, 60, c);
	exb(60, c);
}

int leita(int n, int a[30]){
	setlocale(LC_ALL, "portuguese");
	for (int i=0; i<n; ++i){
	printf ("Digite o %dº Valor de A: ", i+1);
	scanf ("%d", &a[i]);}
}

int leitb (int n, int b[30]){
	setlocale(LC_ALL, "portuguese");
	for (int i=0; i<n; ++i){
	printf ("Digite o %dº Valor de B: ", i+1);
	scanf ("%d", &b[i]);}
}

int jun(int n, int a[30], int b[30], int p, int c[60]){
	for (int i=0; i<p; ++i){
		if (i<n){
			c[i]=a[i];
		}
		else {c[i]=b[i-n];}
	}
}

int exb (int p, int c[60]){
	setlocale(LC_ALL, "portuguese");
	for (int i=0; i<p; i++)
	printf ("\n%dº Valor de C: %d", i+1, c[i]);
}
