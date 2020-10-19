#include <stdio.h>

int main(void) {

  int variable = 5;
  int ingreso;

  printf("Adivina el numero entre el 1 y el 10 que estoy pensando!");
  scanf("%i", &ingreso);

  if (variable == ingreso)
    printf("Adivinaste!");
  else
    printf("Ese no es, perdiste!");

  return 0;
}