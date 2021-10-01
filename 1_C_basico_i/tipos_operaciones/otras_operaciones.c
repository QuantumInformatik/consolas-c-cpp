#include <stdio.h>
int main()
{
    int entero1 = 10;
    int entero2 = 3;
    float num1 = 1.5;
    float num2 = 5.0;

    int suma = entero1 + entero2;
    float multiplicacion = num1 * num2;
    int divisionEnteros = entero1 / entero2;
    int modulo = entero1 % entero2;
    float division = num2 / entero2;

    printf("%d, %.1f, %d, %d, %.2f", suma, multiplicacion, divisionEnteros, modulo, division);

    return 0;
}