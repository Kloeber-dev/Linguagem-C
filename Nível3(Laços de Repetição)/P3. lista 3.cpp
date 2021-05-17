#include <stdio.h>
#include <conio.h>

int main ()
{
    int tab, b;
    printf ("#################### TABUADA ####################");
    printf ("\nEntre com o Valor da Tabuada: ");
    scanf ("%d", &tab);
    for (b = 1; b <= 10; b++){
        printf ("\n %d X %d = %d", tab, b, tab*b);
        }
    getch ();
    return 0;
}
