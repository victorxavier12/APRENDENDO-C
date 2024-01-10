#include <stdio.h>

int main()
{
    /* code */
    printf("olá mundo\n %i\n", 25 + 35);

    printf("%.1f -- %.2f -- %.3f -- %f \n", 1.333, 1.333, 1.333, 1.333);
    int x;
    x=45;
    int a=15, b=20;

    printf("valor de x = %i valor de a e b = %i e %i", x, a, b);

    printf("\nsoma de a'%i' + b'%i' = %i", a , b , a+b);


    return 0;
    
}
/* variaveis dentro de uma PRINTF 
%d ou %i == invocação de um variavel de valor inteiro

%f == invocação de uma variavel  de valor float  (real)**
    essa variavel invoca 6 digitos decimais, %.1f invoca apenas 1 digito decima
*/


