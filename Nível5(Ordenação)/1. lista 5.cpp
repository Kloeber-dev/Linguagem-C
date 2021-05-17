#include <stdio.h>
#include <conio.h>

int main ()
{
    int A[12], c, i, x;
    for (c=1; c<=12; c++)
    {
        printf ("Digite O Valor do Vetor: ");
        scanf ("%d", &A[c]);
    }
    for (c=1; c<=12; ++c)
    for (i=c+1; i<=12;++i)
    {
        if (A[c]<A[i])
        {
            x=A[c];
            A[c]=A[i];
            A[i]=x;
        }
    }
    printf ("Os Valores em Ordem Decrescente Sao: ");
    for (c=1; c<=12; c++)
    {
        printf ("%d\n", A[c]);}
        
    getch ();
    return 0;
}
