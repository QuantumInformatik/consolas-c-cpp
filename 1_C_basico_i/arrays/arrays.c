// estaticos

#include <stdio.h>

int main()
{
    float ingresosPrimerTrimestre[3]; //declarandolo

    //asignado valores de
    ingresosPrimerTrimestre[0] = 23.4;
    ingresosPrimerTrimestre[1] = 23, 4;
    ingresosPrimerTrimestre[2] = 23, 4;

    //recorriendo vector
    for (int i = 0; i < 3; i++)
    {
        printf("El número es: %.2f\n", ingresosPrimerTrimestre[i]);
    }

    char abcedario[] = {'A', 'B', 'C', 'D'}; // inicialización del vector

    for (int i = 0; i < 4; i++)
    {
        printf("El número es: %c\n", abcedario[i]);
    }
}