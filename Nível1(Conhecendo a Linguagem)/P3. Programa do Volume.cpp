#include<stdio.h>
#include<conio.h>

int main()
{
    float R, V, H;
    printf("Entre com o raio:");
    scanf("%f", &R);
    printf("Entre com a altura:");
    scanf("%f", &H);
    V=R*R*3.14159*H;
    printf("O valor do volume eh: %f", V);
    
    getch();
    return 0;
}
