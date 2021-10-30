#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// prototipos de las funciones
void recibeArray(char[]);   // recibe un char[]
void recibePuntero(char *); // recibe un char*
/*
Nos ayuda a movernos por la cadena de una mejor forma, no es un recorte, es un avance de posición.
*/
void aritmeticaDirecciones();
char *obtenerSaludo();
char *substring(char *s, int desde, int hasta);
char *rtrim(char *s);

int main()
{
    char *x = "Esto es una cadena      ";
    printf("[%s]\n", rtrim(x));
    return 0;
}

char *substring(char *s, int desde, int hasta)
{
    int n = hasta - desde;
    char *ret = (char *)malloc(n + 1);
    int j = 0;
    for (int i = desde; i < hasta; i++)
    {
        ret[j] = s[i];
        j = j + 1;
    }
    ret[j] = '\0';
    return ret;
}

char *rtrim(char *s)
{
    int i = strlen(s) - 1;
    while (s[i] == ' ')
    {
        i = i - 1;
    }
    return substring(s, 0, i + 1);
}

char *obtenerSaludo()
{
    // cadena local
    char a[] = "Hola, Mundo";
    // longitud de la cadena que vamos a retornar
    int n = strlen(a);
    // array de n+1 caracteres generado dinamicamente
    char *r = (char *)malloc(n + 1);
    // asigna la cadena al array gestionado dinamicamente
    strcpy(r, a);
    return r;
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
