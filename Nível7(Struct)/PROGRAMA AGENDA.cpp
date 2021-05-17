#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	
    int menu=0;
	do{
    printf ("\n############   AGENDA   ############");printf ("\n 1. Cadastro e Registros \n 2. Pesquisa de Registro \n 3. Classificação Alfabética \n 4. Alteração de Registro \n 5. Sair ");
	printf ("\n Escolha a Opção: ");
	
    scanf ("%d", &menu);
	
    int i, j;
    char rg[80], pesq[80];
	
    struct agd {
		char endereco[80];
		char nome[80];
		int idade;
		char telefone[8]; 	
		};
		
	struct agd x[5], y;
	
    switch (menu){
		case 1: printf ("\n1. Cadastro e Registros");
            for (i=0;i<5;++i){
			printf ("\nDigite o Nome: ");
			fflush (stdin);
			fgets (x[i].nome, 80, stdin);
			
            printf ("Digite o Endereço: ");
			fflush (stdin);
			fgets (x[i].endereco, 80, stdin);
			
            printf ("Digite a Idade: ");
            scanf ("%d", &x[i].idade);
            
            printf ("Digite o Telefone: ");
			fflush (stdin);
			fgets (x[i].telefone, 8, stdin);
		} break;
		
		case 2: printf ("\n 2. Pesquisa de Registro");
            printf ("\nDigite o Nome Para Pesquisa: ");
            fflush (stdin);
            fgets (pesq,80,stdin);
                for (i=0; i<=4; ++i){
                    if (strcmp(pesq,x[i].nome) == 0) break;}
                        printf ("%s \nEncontrado na posição %d", pesq, i+1);
            break;
		
        case 3: printf ("\n 3. Classificação Alfabética\n");
				for (i=0; i<5; ++i)
                    for (j=i+1; j<6; ++j)
                    {
                        if (strcmp (x[j].nome, x[i].nome) >0)
                        {y=x[j];
                        x[j]=x[i];
                        x[i]=y;}
                     }
                for (i=0; i<5; ++i)
                    {printf ("%s", x[i].nome);}break;
		case 4: printf ("\n 4. Alteração de Registro\n");
            printf ("Digite o Registro a Ser Alterado: ");
            fflush (stdin);
            fgets (rg, 80, stdin);
            
            for (i=0; i<=4; ++i){
                    if (strcmp (rg, x[i].nome) == 0) break;}
                    
                    printf ("\nALTERE O REGISTRO\n");
			printf ("Digite o Nome: ");
			fflush (stdin);
			fgets (x[i].nome, 80, stdin);
			
            printf ("Digite o Endereço: ");
			fflush (stdin);
			fgets (x[i].endereco, 80, stdin);
			
            printf ("Digite a Idade: ");
            scanf ("%d", &x[i].idade);
            
            printf ("Digite o Telefone: ");
			fflush (stdin);
			fgets (x[i].telefone, 8, stdin);
		 break;
                    
       
	}
}
while (menu!=5);
	getch ();
	return 0;
}
