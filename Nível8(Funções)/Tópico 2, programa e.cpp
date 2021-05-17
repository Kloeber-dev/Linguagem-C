#include <stdio.h>
#include <locale.h>

int va(int n, int a[12]);
int vb(int n, int b[12]);
int vc(int n, int a[12], int b[12], int c[12]);

int main (){
	int a[12], b[12], c[12], n=12;
	va(12, a);
	vb(12, b);
	vc(12, a, b, c);
}

int va(int n, int a[12]){
	for(int i=0; i<n; ++i){
		setlocale (LC_ALL, "portuguese");
	printf("Digite o %dº Valor de A: ", i+1);
	scanf ("%d", &a[i]);}
	
	for (int i=0; i<n-1; ++i)
	for (int j=i+1; j<n; ++j)
	if (a[i]>a[j]){
		int aux= a[i];
		a[i]=a[j];
		a[j]=aux;
	}
}

int vb(int n, int b[12]){
	setlocale (LC_ALL, "portuguese");
	for(int i=0; i<n; ++i){
	printf("Digite o %dº Valor de B: ", i+1);
	scanf ("%d", &b[i]);}
	
	for (int i=0; i<n-1; ++i)
	for (int j=i+1; j<n; ++j)
	if (b[i]>b[j]){
		int aux= b[i];
		b[i]=b[j];
		b[j]=aux;
	}
}

int vc(int n, int a[12], int b[12], int c[12]){
	setlocale (LC_ALL, "portuguese");
	for (int i=0; i<n; ++i){
		c[i]=a[i]+b[i];}
	for (int i = 0; i<n-1; ++i)
	for (int j=i+1; j<n;++j)	
	if (c[i]>c[j]){
		int aux=c[i];
		c[i]=c[j];
		c[j]=aux;
	}
		
	for (int i=0; i<n; ++i){printf ("\nO %d Valor de C é: %d", i+1, c[i]);
	}
}
