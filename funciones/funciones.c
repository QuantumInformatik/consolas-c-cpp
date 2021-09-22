#include <stdio.h>

/*
    función:
    procedimiento, no devuelve nada  o no retorna
    fuciones, devuelve un valor.
*/
int cuadrado(int);

int main(){
    int numeroPositivo = 4;
    int resultadoCuadrado = cuadrado(numeroPositivo);

    return 0;
}

//al declarar la función debajo de main, debemos declarar arriba el prototipo, sino el compilador dará error.
int cuadrado(int numero){
    return (numero*numero);
}