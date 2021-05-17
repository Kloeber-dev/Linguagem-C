#include<stdio.h>
#include<conio.h>

int main()
{
    float n1, n2, n3, m;
    printf("Entre com a Primeira Nota: ");
    scanf("%f", &n1);
    printf("\nEntre com a Segunda Nota: ");
    scanf("%f", &n2);
    printf("\nEntre com a Terceira Nota: ");
    scanf("%f", &n3);
    m=(n1+n2+n3)/3;
    if (m>=6)
    printf("Aluno APROVADO com media: %.2f", m);
    else printf("\nAluno REPROVADO com media: %.2f", m);

    getch();
    return 0;
}
