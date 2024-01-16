#ifdef _MSC_VER 
#define _CRT_SECURE_NO_WARNINGS 
#endif
#include <stdio.h>
#include <locale.h>

void main()
{
    //int x = 35, y = 45;
    
    setlocale(LC_ALL, "Portuguese");

    /*printf("o valor de x = %i e y = %i e sua soma é = %i \n", x , y , x+y);
    int g;
    printf("introdusa um valor inteiro: ");
    scanf("%i", &g);
    int h;
    printf("introdusa outo valor inteiro: ");
    scanf("%i", &h);
    printf("a soma dos dois valore é  %i", g + h );*/

    //******* 

    float real1;
    printf("introdusa outo valor inteiro: ");
    scanf("%f", &real1);
    printf("o dobro desse valore é  %.2f", real1 * 2);
}
    