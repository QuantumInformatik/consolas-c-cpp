#include <stdio.h>
#define IVA 19  //no se reserva memoria en tiempo de ejecución sino en compilación

//ambito local y global

//ambito global global
int variableAmbitoGlobal=200; //puede ser dificil de depurar dado que como es global se puede cambiar desde muchos puntos


int main(){
    //ambito local
    int enteroAmbitoLocal =100; 

    printf("El impuesto sobre el valor añadido es de un %d%c", IVA,'%');

    return 0;
}