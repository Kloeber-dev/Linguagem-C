#include <stdio.h>
#include <conio.h>

int main ()
{
    int N=1, cont;
    printf ("Digite um numero menor ou igual a 50: ");
    scanf ("%d", &N);
    
    if (N<=50)
    {
        while (N<=250)
        {
            N=N*3;
            printf ("%d \n", N);
        }
    }
        else
        printf ("Numero Invalido!!");
    getch ();
    return 0;
}
