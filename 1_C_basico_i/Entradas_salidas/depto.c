 #include <stdio.h>
 int main() {
  char depto;
  int idEmpleado;

  printf("Escriba su ID de empleado: ");
  scanf("%d", &idEmpleado);

  printf("Departamento al que pertenece: ");
  scanf(" %c", &depto); // recuerde colocar el espacio antes del %c para que el programa pueda solicitar el char

  printf("ID empleado %d: \n", idEmpleado);
  printf("Depto: %c", depto);

  return 0;
 }