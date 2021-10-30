#include <stdio.h>

void demo(){
     // asigno a c el valor 65 ('A' es sinonimo de 65)
    char c = 'A';
    printf("Como caracter: %c \n",c);
    printf("Valor numerico ASCII: %d\n",c);

    // asigno a i el valor 65
    int i = 'A';
    printf("Como caracter: %c \n",i);
    printf("Valor numerico ASCII: %d\n",i);
}

void tratamientoCaracteres(){
    char nombre1[10] = "Guillermo";
    char nombre2[] = "Juan";
    char numeros[10] = {0};

    printf("nombre1 = [%s]\n",nombre1);
    printf("nombre2 = [%s]\n",nombre2);
    printf("numeros = [%s]\n",numeros);


}


int main(){

    tratamientoCaracteres();
    
    //demo();
    return 0;

}

