#include<stdio.h>
#include<locale.h>

int leita(int n, int *a);
int leitb(int n, int *b);
int ecc(int n, int *a, int *b);

int main(){
	int a[12], b[12], n=12;
	leita(12,a);
	leitb(12,b);
	ecc(12, a,b); return 0;
}

int leita (int n, int *a){
	setlocale(LC_ALL, "portuguese");
	for (int i=0;i<12;++i){
	printf ("Digite o %dº Valor de A: ", i+1);
	scanf ("%d", &a[i]);}
	
	for (int i=0;i<n-1;++i)
	for (int j=i+1;j<n;++j)
	if(a[i]>a[j]){
		int aux=a[i];
		a[i]=a[j];
		a[j]=aux;
	}
}

int leitb (int n, int *b){
	setlocale(LC_ALL, "portuguese");
	for (int i=0;i<n;++i){
	printf ("Digite o %dº Valor de B: ", i+1);
	scanf ("%d", &b[i]);}
		
		for (int i=0;i<n-1;++i)
	for (int j=i+1;j<n;++j)
	if(b[i]>b[j]){
		int aux=b[i];
		b[i]=b[j];
		b[j]=aux;
	}
}

int ecc(int n, int *a, int *b){
	int c[12];
	for (int i=0;i<n;++i){
		c[i]=a[i]+b[i];
	}
	
		for (int i=0;i<n-1;++i)
		for (int j=i+1;j<n;++j)
		if (c[i]>c[j]){
			int aux=c[i];
			c[i]=c[j];
			c[j]=aux;
	}
	
	for (int i=0;i<n;++i){
		setlocale(LC_ALL, "portuguese");
		printf ("\nO %dº Valor de C é: %d", i+1, c[i]);
	}
}
