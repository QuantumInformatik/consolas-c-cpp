#include <stdio.h>

int main()
{
    int entero1 = 3;
    int entero2 = entero1 * 2;

    int opcion = 12;

    if (entero1 > entero2)
    {
        printf("El numero %d es mayor que %d\n", entero1, entero2);
    }
    else
    {
        printf("El numero %d es menor que %d\n", entero1, entero2);
    }

    switch (opcion)
    {
    case 0:
        printf("Soporte tecnico %d", opcion);
        break;
    case 1:
        printf("Fidelización %d", opcion);
        break;
    default:
        printf("La opción selecciona es incorrecta");
        break;
    }
}