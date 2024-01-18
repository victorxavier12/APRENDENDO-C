#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <locale.h>

void main()
{
    int v;
    float num1;
    
    setlocale(LC_ALL, "Portuguese");

    num1 = 1;
    for (size_t i = 0; i < 5; i++)
    {
        printf("%.f", num1++);
    }

    while (v)
    {

        /* code */
        printf("\ndigite um valor: ");
        scanf("%f", &num1);
        if (num1 < 9.5 && num1 >= 0)
        {
            printf("%*f reporvado", num1);
        }
        else if (num1 > 20 || num1 < 0)
        {
            printf("%f valor invalido", num1);
            
        }
        else
        {
            printf("%f aprovado", num1);
        }
    }
}