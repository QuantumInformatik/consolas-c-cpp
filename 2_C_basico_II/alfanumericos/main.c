#include <stdio.h>

void demo()
{
    // asigno a c el valor 65 ('A' es sinonimo de 65)
    char c = 'A';
    printf("Como caracter: %c \n", c);
    printf("Valor numerico ASCII: %d\n", c);

    // asigno a i el valor 65
    int i = 'A';
    printf("Como caracter: %c \n", i);
    printf("Valor numerico ASCII: %d\n", i);
}

void tratamientoCaracteres()
{
    char nombre1[10] = "Guillermo";
    char nombre2[] = "Juan";
    char numeros[10] = {0};

    printf("nombre1 = [%s]\n", nombre1);
    printf("nombre2 = [%s]\n", nombre2);
    printf("numeros = [%s]\n", numeros);
}

void copiarCadena(char destination[], char source[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

int length(char t[])
{
    int i = 0;
    while (t[i] != '\0')
    {
        i = i + 1;
    }
    return i;
}

void usoSscanf()
{
    char cadena[] = "Guillermo 1.70 40";
    char nombre[10];
    float altura;
    int edad;
    sscanf(cadena, "%s %f %d", nombre, &altura, &edad);
    printf("Nombre: [%s]\n", nombre);
    printf("Altura: [%.2f]\n", altura);
    printf("Edad: [%d]\n", edad);
}

int main()
{

    usoSscanf();

    char nombre[10];

    copiarCadena(nombre, "Guillermo");
    printf("nombre = %s\n", nombre);

    printf("longitud de %s = %d\n", "Guillermo", length("Guillermo"));

    //tratamientoCaracteres();
    //demo();
    return 0;
}
