#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm

void main()
{

    short miShort = sizeof(short);
    int cantidadBytes = sizeof(int);
    long miLong = sizeof(long);

    char caracter = sizeof(char);

    int miFloat = sizeof(float);
    int miDouble = sizeof(double);
    
    printf("Short soporta: %d bits\nInt soporta: %d bits\nLOng soporta: %d bits\n", (miShort * 8),(cantidadBytes * 8),(miLong * 8));
    printf("char soporta: %d bits\n", (caracter * 8));

    printf("Float soporta: %d bits\nDouble soporta: %d bits\n", (miFloat * 8),(miDouble* 8));

}