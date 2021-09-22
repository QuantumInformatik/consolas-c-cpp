#include <stdio.h>

/*
    función:
    procedimiento, no devuelve nada  o no retorna
    fuciones, devuelve un valor.
*/

//al declarar la función debajo de main, debemos declarar arriba el prototipo, sino el compilador dará error.

int cuadrado(int);

// paso por valor: crea una copia, notese que no son las mismas direcciones de memoria.

int main()
{
    int numeroPositivo = 4;
    printf("1. El valor de numeroPositivo es %d y su dirección es %p\n", numeroPositivo, &numeroPositivo);
    int resultadoCuadrado = cuadrado(numeroPositivo);
    printf("2. El valor de numeroPositivo es %d y su dirección es %p\n", numeroPositivo, &numeroPositivo);
    printf("3. El valor de resultadoCuadrado es %d y su dirección es %p\n", resultadoCuadrado, &resultadoCuadrado);

    return 0;
}

/*
* Cabecera: int cuadrado(int numero);
* precondición: numero debe ser un número entero
* postcondición: la función devuelve numero al cuadrado
**/
int cuadrado(int numero)
{
    return (numero * numero);
}