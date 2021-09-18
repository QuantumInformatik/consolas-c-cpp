#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
tipo de datos en C
númericos short 2B, int 4B, long 8B, char 1B
flotantes float 4B, double 8B
eso depende del compilador y hardware

1B = 1 Byte = 8 bits

*/

void concatMy(int , int , int , int, char* rgbRef);

char cadena[] = "hola,mundo";
char *nota;
char *token;

int main()
{
    char v[4];
    concatMy(4, 0, 0, 0, v);
    printf("v: %s", v);
    nota = "RI,KI";
    /* printf("%s \n",cadena);
    cadena[] = "hola,mundo";
    token = strtok(cadena, ",");
    int tam = strlen(token);
    printf("tamano: %d\n", tam);*/

    /* for (int i = 0; i < tam; i++)
    {
        if (1)
        {
            printf("Encontramos un token: %s\n", token);
        }
        token = strtok(NULL, ",");
    }*/

    char miCaracter[4] = "Hola"; // arreglo de caracteres, debe ser con comillas dobles y se imprime con %s = String en otros lenguajes
    char caracterAscii = 97;
    char caracter = 'a';

    short miShort = 32767;
    int miEntero = 2147483647;         // 4Bytes con signo -> -2^(32-1) hasta 2^(32-1)-1
    unsigned long miLong = 2147483648; // se comporta en mi maquina igual que un int

    float flo = 1844670000000000000.3;
    double dou = 1844670000000000000; //8Byte con signo -> -2^(64-1) hasta 2^(64-1)-1

    printf("valores:\n");

    printf(" mi miShort: %d\n mi miEntero: %d\n mi long: %d\n", miShort, miEntero, miLong);

    printf("===============================\n");
    printf(" mi char ascii: %c\n mi char: %c\n mi char[]: %s\n", caracterAscii, caracter, miCaracter);
    printf("===============================\n");

    printf("%f", flo);

    return 0;
}

void concatMy(int a, int b, int c, int d, char* rgbRef)
{
 
    char s1[4];
    char s2[4];
    char s3[4];
    char s4[4];
     printf("rgbRef %s\n", rgbRef);

    //itoa(a, rgbRef, 4);
    printf("rgbRef %s\n", rgbRef);


   	//itoa(b, s2, 4);
    //itoa(c, s3, 4);
    ///itoa(d, s4, 4);
  
    strcat(rgbRef, s2);
  	strcat(rgbRef, s3);
  	strcat(rgbRef, s4);

    printf("rgbRef %s\n", rgbRef);

}
