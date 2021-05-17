#include <stdio.h>
#include <conio.h>

int main ()
{
    int RAC[9], RAV[9], c;
    for (c=1; c<=9; c++)
    {
    printf ("Digite o RA:");
    scanf ("%d", &RAV[c]);
    }
    RAC[1]=RAV[1];
    RAC[2]=RAV[2];
    RAC[3]=RAV[8];
    RAC[4]=RAV[7];
    RAC[5]=RAV[5];
    RAC[6]=RAV[6];
    RAC[7]=RAV[3];
    RAC[8]=RAV[4];
    RAC[9]=RAV[9];
   for (c=1; c<=9; c++)
   {
    printf ("%d", RAC[c]);
}
getch ();
return 0;
}
