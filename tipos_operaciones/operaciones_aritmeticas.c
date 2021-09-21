#include <stdio.h>

int main()
{
    int operando1, operando2;

    printf("Número 1: ");
    scanf("%d", &operando1);

    printf("Número 2: ");
    scanf(" %d", &operando2);

    printf("resultados:\n");
    printf(" Suma: %d\n", (operando1 + operando2));

    printf(" \n\n");

    printf("Número 2: ");
    scanf(" %d", &operando2);

    return 0;
}
