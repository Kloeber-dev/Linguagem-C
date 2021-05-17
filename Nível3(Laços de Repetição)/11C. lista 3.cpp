#include <stdio.h>
#include <conio.h>

int main ()
{
    int a, b;
    printf ("#################### TABUADA ####################");
    printf ("\nEntre com o Valor da Tabuada: ");
    scanf ("%d", &b);
    for (a=0; a <= 10; a++){
        printf ("\n %d X %d = %d", b, a, b*a);
        }
    getch ();
    return 0;
}
