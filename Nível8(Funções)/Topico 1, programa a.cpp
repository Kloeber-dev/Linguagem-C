#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int cad();
int pesq();
int list ();
int alt();
int del ();
int i, j, menu;
struct agd{
	char nome [80], end [80], email [100], tel[9];
}; struct agd x[5];


int main (){ setlocale (LC_ALL, "portuguese");
	do{ 
	printf ("\t\t\t===========================================\n");
	printf ("\t\t\t\t\tA G E N D A\n");
	printf ("\t\t\t===========================================\n");
	printf ("\n\t1. Cadastro");
	printf ("\n\t2. Pesquisa");
	printf ("\n\t3. Listagem Alfabética");
	printf ("\n\t4. Alteração de Registro");
	printf ("\n\t5. Deletar Registro");
	printf ("\n\t6. Sair");
	printf ("\n\nDigite a Opção: "); 
	scanf ("%d", &menu);
	system ("cls");
	
	switch (menu){
		case 1: cad (); break;
		case 2: pesq (); break;
		case 3: list (); break;
		case 4: alt (); break;
		case 5: del (); break;
	}
	}while (menu!= 6); 
	return (0);
}

int cad(){ setlocale (LC_ALL, "portuguese");
	printf ("\n\t\t\t1. CADASTRO\n");
	for (i=0; i<5; ++i){
		printf ("\nDigite o Nome: ");
		fflush (stdin);
		fgets (x[i].nome, 80, stdin);
		printf ("Digite o Endereço: ");
		fflush (stdin);
		fgets (x[i].end, 80, stdin);
		printf ("Digite o E-mail: ");
		fflush (stdin);
		fgets (x[i].email, 100, stdin);
		printf ("Digite o Telefone: ");
		fflush (stdin);
		fgets (x[i].tel, 80, stdin);
	}
}

int pesq (){
	setlocale (LC_ALL, "portuguese");
	printf ("\n\t\t\t2. PESQUISA");
	printf ("\nDigite o Nome p/ Pesquisar: ");char pn[80];
	fflush (stdin); 
	fgets (pn, 80, stdin);
	for (i=0; i<5; ++i){
		if(strcmp(pn, x[i].nome)==0) {
			printf ("\nNome: %s", x[i].nome);
			printf ("Endereço: %s", x[i].end);
			printf ("E-mail: %s", x[i].email);
			printf ("Telefone: %s", x[i].tel);
		} 
}
}

int list (){ setlocale (LC_ALL, "portuguese");
  		 struct agd aux;
	printf ("\n\t\t\t3. LISTAGEM ALFABÉTICA\n");
	for (i=0; i<4; ++i)
	for (j=i+1; j<5; ++j)
	if (strcmp(x[i].nome, x[j].nome)>0){
		aux=x[i];
		x[i]=x[j];
		x[j]=aux;
		}
	for (i=0; i<5; ++i){
		printf ("Nome: %s", x[i].nome);
	}
	}

int alt(){
	setlocale (LC_ALL, "portuguese");
	printf("\n\t\t\t\t4. ALTERAÇÃO DE REGISTRO");
	printf ("\nDigite o Nome p/ Alterar: "); char altn[80];
	fflush (stdin);
	fgets (altn, 80, stdin);
	for (i=0;i<5;++i){ if(strcmp(altn, x[i].nome)==0) break;}
	printf ("\nDigite o Nome: ");
		fflush (stdin);
		fgets (x[i].nome, 80, stdin);
		printf ("Digite o Endereço: ");
		fflush (stdin);
		fgets (x[i].end, 80, stdin);
		printf ("Digite o E-mail: ");
		fflush (stdin);
		fgets (x[i].email, 100, stdin);
		printf ("Digite o Telefone: ");
		fflush (stdin);
		fgets (x[i].tel, 80, stdin);
}

int del (){
	setlocale (LC_ALL, "portuguese");
	printf("\n\t\t\t5. REMOÇÃO DE REGISTRO");
	printf ("\nDigite o Nome p/ REMOVER: "); char deln[80];
	fflush (stdin);
	fgets (deln, 80, stdin);
	for (i=0;i<5;++i){ if(strcmp(deln, x[i].nome)==0) break;}
	printf ("\nPressione <ENTER> 4x P/ Remover\n"); 
		fgets(x[i].nome,80,stdin);
		fgets(x[i].end,80,stdin);
		fgets(x[i].email,100,stdin);
		fgets(x[i].tel,9,stdin);
	printf ("\nVocê Deletou o Registro!\n");
}
