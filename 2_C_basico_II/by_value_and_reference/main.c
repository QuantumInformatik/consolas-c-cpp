#include <stdio.h>

int main(){

    int a = 45;

    // variables tipo puntero a int
    /*
        es decir, una variable con la capacidad de almacenar dirección de memoria de otra variable.
    */
    int* p;
    int *q;

    p=&a; //a p le asigno la dirección de memoria de a

    /*
    al colocar el &Variable al inicio de una variable, obtego su dirección de memoria
    al colocar el *Variable al inicio de una variable, accedo a su contenido, es decir:
    hace referencia al contenido alojado en el espacio de memoria direccionado por un puntero
    */
    *p=12; //en este caso estoy obteniendo el contenido de p y le asigno un 12

    printf("a=%d\n",(p));

    return 0;
}