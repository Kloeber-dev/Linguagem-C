#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>


int cad ();
int list ();
int altnota ();
int pesq ();
int listapv ();
int listrpv ();


struct alunos{
	char nome[80];
	float a, b, media;
}; struct alunos x[20];
int i, j, menu;

int main (){
	setlocale (LC_ALL, "portuguese");
	do{
		printf ("\t\t\t===========================================\n");
	printf ("\t\t\t\t\tSALA DE AULA\n");
	printf ("\t\t\t===========================================\n");
	printf ("\n\t1. Cadastro");
	printf ("\n\t2. Listagem Alfabética");
	printf ("\n\t3. Alteração de Registro");
	printf ("\n\t4. Pesquisa");
	printf ("\n\t5. Lista de Alunos Aprovados");
	printf ("\n\t6. Lista de Alunos Reprovados");
	printf ("\n\t7. Sair");
	printf ("\n\nDigite a Opção: "); 
	scanf ("%d", &menu);
	system ("cls");
	
	switch (menu){
		case 1: cad (); break;
		case 2: list (); break;
		case 3: altnota (); break;
		case 4: pesq (); break;
		case 5: listapv (); break;
		case 6: listrpv (); break;
	}
	}while (menu != 7);
	return (0);
}

int cad(){ setlocale (LC_ALL, "portuguese");
	printf ("\n\n\t\t\t1. CADASTRO");
	for(i=0; i<20; ++i){
		printf ("\nDigite o Nome: ");
		fflush (stdin);
		fgets(x[i].nome, 80, stdin);
		printf ("Digite a Nota 1: ");
		scanf ("%f", &x[i].a);
		printf ("Digite a Nota 2: ");
		scanf ("%f", &x[i].b);
	x[i].media=(x[i].a+x[i].b)/2;
	printf ("Média: %.2f\n", x[i].media);
	}
}

int list (){setlocale (LC_ALL, "portuguese");
	struct alunos aux;
	printf ("\n\n\t\t\t2. LISTA DE ALUNOS\n");
	for (i=0;i<19;++i)
	for (j=i+1;j<20;j++)
	if (strcmp(x[i].nome,x[j].nome)>0){
		aux=x[i];
		x[i]=x[j];
		x[j]=aux;
	}
	for (i=0;i<20;++i){
		printf ("\nAluno: %s\t\tMédia: %.2f\n", x[i].nome, x[i].media);
	}
}

int altnota (){setlocale (LC_ALL, "portuguese");
	char altn[80];
	printf ("\n\n\t\t3. ALTERAÇÃO DE REGISTRO\n");
	printf ("Digite o Nome p/ ALTERAR: ");
	fflush (stdin);
	fgets (altn, 80, stdin);
	for (i=0;i<20;++i){
		if (strcmp(altn, x[i].nome) == 0)break;}
		printf ("\nNovo Registro!");
		printf ("\nDigite o Nome: ");
		fflush (stdin);
		fgets(x[i].nome, 80, stdin);
		printf ("Digite a Nota 1: ");
		scanf ("%f", &x[i].a);
		printf ("Digite a Nota 2: ");
		scanf ("%f", &x[i].b);
		x[i].media=(x[i].a+x[i].b)/2;
	printf ("Média: %.2f\n", x[i].media);
}

int pesq (){setlocale (LC_ALL, "portuguese");
	printf ("\n\n\t\t4. PESQUISA\n");
	printf ("\nDigite o Nome p/ Pesquisa: ");
	char pn[80];
	fflush (stdin);
	fgets (pn,80,stdin);
	for (i=0;i<20;++i){ if(strcmp(pn, x[i].nome)==0) break;
	}
	printf ("\nNome: %s", x[i].nome);
		printf ("Nota 1: %.2f\n", x[i].a);
		printf ("Nota 2: %.2f\n", x[i].b);
		printf ("Média: %.2f\n", x[i].media);
}

int listapv(){setlocale (LC_ALL, "portuguese");
	printf ("\n\n\t\t5. LISTA DE APROVADOS\n\n");
	for (i=0;i<20;++i)
		if(x[i].media>=7.0){
			printf ("Aluno: %s\t\tMédia: %.2f\n", x[i].nome, x[i].media);
		}
}

int listrpv(){setlocale (LC_ALL, "portuguese");
	printf ("\n\n\t\t5. LISTA DE REPROVADOS\n\n");
	for (i=0;i<20;++i)
		if(x[i].media<7.0){
			printf ("Aluno: %s\t\tMédia: %.2f\n", x[i].nome, x[i].media);
		}
}


