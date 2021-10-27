#include <stdio.h>
// prototipo de la funcion
double valorAbsoluto(double);

int main()
{
    double v, a;
    printf("Ingrese un valor numerico: ");
    scanf("%lf", &v);
    // invoco a la funcion
    a = valorAbsoluto(v);

    printf("El valor absoluto de %.0lf es %.0lf\n", v, a);

    return 0;
}

double valorAbsoluto(double d)
{
    double ret = d;
    if (ret < 0)
    {
        ret = -ret;
    }
    return ret;
}