#include <stdio.h>
#include <conio.h>

int main ()
{
    int a[9], b[9], c;
    for (c=1; c<=9; c++)
    {
        printf ("Digite o RA: ");
        scanf ("%d", &a[c]);
    }
    b[1]=a[1];
    b[2]=a[2];
    b[3]=a[3];
    b[4]=a[4];
    b[5]=a[5];
    b[6]=a[9];
    b[7]=a[8];
    b[8]=a[7];
    b[9]=a[6];
    for (c=1; c<=9; c++)
    {
        printf ("%d", b[c]);
    }
    getch ();
    return 0;
}
