#include <stdio.h>

#define PRECIO_HORA_EXTRA 60
#define BONIFICACION_DEPARTAMENTO_A 2750

int anioActual =2021;


int main(){
    int edad, annioNacimiento, horasExtrasTrabajadas, haRealizadoHorasExtras;//actua como boolean
    float sueldo, totalHorasExtraPagar, ingresoMensual[12]; 
    char departamento;

    printf("¿Qué edad tiene?: \n");
    scanf("%d", &edad);

    for (int i = 0; i <12;i++){
        printf("Sueldo para el mes %d?: ", i+1);
        scanf("%f", &ingresoMensual[i]);
    }

    printf("Sueldo anual?");
    scanf("%f", &sueldo);

    printf("Departamento al que pertenece? \n");
    scanf(" %c", &departamento);

    printf("Horas extras trabajas en este anio? \n");
    scanf("%d", &horasExtrasTrabajadas);

    annioNacimiento = anioActual -edad;
    totalHorasExtraPagar =horasExtrasTrabajadas*PRECIO_HORA_EXTRA;
    haRealizadoHorasExtras = totalHorasExtraPagar;

    if(departamento=='A'|| departamento=='a'){
        printf("Entro");
        sueldo = sueldo + BONIFICACION_DEPARTAMENTO_A;
    }

    return 0;
}