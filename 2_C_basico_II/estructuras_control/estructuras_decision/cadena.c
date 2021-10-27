#include <stdio.h>

int main(){
    char nombre[5];
    nombre = "Juan"; // esto es incorrecto - más adelante veremos porque

    int edad = 33;
    double altura =1.78;

    printf("Mi nombre es %s, tengo %d años y mido %.2lf metros. \n",nombre, edad, altura);

    return 0;
}