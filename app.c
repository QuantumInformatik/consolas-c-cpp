#include <stdio.h>

//proyecto global

int main(){
    int edad;
    float sueldo;
    char departamento;

    printf("¿Qué edad tiene?: \n");
    scanf("%d", &edad);

    printf("Sueldo anual?");
    scanf("%f", &sueldo);

    printf("Departamento al que pertenece? \n");
    scanf(" %c", &departamento);

    return 0;
}