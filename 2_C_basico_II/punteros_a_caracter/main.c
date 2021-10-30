#include <stdio.h>

// prototipos de las funciones
void recibeArray(char[]);   // recibe un char[]
void recibePuntero(char *); // recibe un char*
/*
Nos ayuda a movernos por la cadena de una mejor forma, no es un recorte, es un avance de posición.
*/
void aritmeticaDirecciones();
char* obtenerSaludo();




int main()
{
    char saludo[] = obtenerSaludo();
    return 0;
}

char* obtenerSaludo() 
{
 char a[] = "Hola, Mundo"; return a; // esto es incorrecto porque la variable a será destruida fuera de la función obetener saludo
} 

void aritmeticaDirecciones()
{
    char a[] = "Esto es una cadena";

    printf("[%s]\n", a);      // imprime: [Esto es una cadena]
    printf("[%s]\n", a + 5);  // imprime: [es una cadena]
    printf("[%s]\n", a + 9);  // imprime: [na cadena]
    printf("[%s]\n", a + 12); // imprime: [cadena]

}

void recibeArray(char x[])
{
    printf("x array = %s\n", x);
    printf("x[3] = %c\n", x[3]);
}
void recibePuntero(char *x)
{
    printf("x puntero = %s\n", x);
    printf("x[3] = %c\n", x[3]);
}
