#include<stdio.h>
#include<conio.h>

int main()
{
    float n1, n2, m, ne, nm;
    printf("Digite a Primeira Nota: ");
    scanf("%f", &n1);
    printf("Digite a Segunda Nota: ");
    scanf("%f", &n2);
    m=(n1+n2)/2;
    if (m>=6.0)
    {
    printf("Aluno Aprovado com Media: %.2f", m);
	}
	else 
	printf ("Digite a Nota do Exame: ");
    scanf ("%f", &ne);
    nm=(ne+m)/2;
	if (nm>=5.0)
	{
	printf("Aluno APROVADO em exame com media: %.2f", nm);
	}else 
    printf ("Aluno REPROVADO com media: %.2f", nm);
    
    getch();
    return 0;
}
