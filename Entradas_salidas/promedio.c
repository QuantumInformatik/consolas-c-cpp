#include <stdio.h>

int main()
{
    int a = 8, b = 9, c = 10, d = 11;
    float promedio;
    a = a /*+ b + c */;
    promedio = (a + b + c /* + d */) / 3;
    printf("Primer numero: %d\n", a);
    printf("Segundo numero: %d\n", b);
    printf("Tercer numero: %d\n", c);
    // printf("Cuarto numero: %d\n", d);
    printf("El promedio es: %.2f", promedio);

    return 0;
}