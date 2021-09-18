#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void concatMy(int a, int b, int c, int d, char *rgbRef)
{

    char s1[4];
    char s2[4];
    char s3[4];
    char s4[4];

    printf("rgbRef %s\n", rgbRef);

    sprintf(s1, "%d", a);
    sprintf(s2, "%d", b);
    sprintf(s3, "%d", c);
    sprintf(s4, "%d", d);

    //itoa(a, rgbRef, 4);
    printf("rgbRef %s\n", rgbRef);

    //itoa(b, s2, 4);
    //itoa(c, s3, 4);
    ///itoa(d, s4, 4);
    strcat(rgbRef, s1);

    strcat(rgbRef, s2);
    strcat(rgbRef, s3);
    strcat(rgbRef, s4);

    printf("rgbRef %s\n", rgbRef);
}

void validar(char *rgb)
{
    printf("%s\n", rgb);

    if (strcmp("0000", rgb) == 0)
    {
        printf("hola\n");
    }

    printf("%s\n", rgb);
}

void main()
{
    char rgb[4] = {};
    printf("v %s\n", rgb);

    concatMy(0, 0, 0, 0, rgb);
    validar(rgb);

    printf("rgb: %s", rgb);
}