#include <stdio.h>
#include <locale.h>

int fibo(int n, int ant, int fi);

int main (){
	setlocale(LC_ALL, "portuguese");
	printf ("\t\t\t=============================\n");
	printf ("\t\t\t\tF I B O N A C C I\n");
	printf ("\t\t\t=============================\n\n");
	int ant=-1, fi=1, n;
	printf ("Digite a Quantidade de Termos da Sequência: ");
	scanf ("%d", &n);
	fibo (n, ant, fi);
}

fibo(int n, int ant, int fi){
		 int aux=0;
	for (int i=0; i<n; i++){
		aux=ant;
		ant=fi;
		fi=ant+aux;
		printf ("\n%d", fi);
	}
	
}
