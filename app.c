#include <stdio.h>

//proyecto global
#define PRECIO_HORA_EXTRA 60

int anioActual =2021;


int main(){
    int edad;
    int annioNacimiento;
    int horasExtrasTrabajadas;
    int haRealizadoHorasExtras;//actua como boolean
    float sueldo;
    float totalHorasExtraPagar; 
    char departamento;

    printf("¿Qué edad tiene?: \n");
    scanf("%d", &edad);

    printf("Sueldo anual?");
    scanf("%f", &sueldo);

    printf("Departamento al que pertenece? \n");
    scanf(" %c", &departamento);

    printf("Horas extras trabajas en este anio? \n");
    scanf("%d", &horasExtrasTrabajadas);

    annioNacimiento = anioActual -edad;
    totalHorasExtraPagar =horasExtrasTrabajadas*PRECIO_HORA_EXTRA;
    haRealizadoHorasExtras = totalHorasExtraPagar;

    return 0;
}