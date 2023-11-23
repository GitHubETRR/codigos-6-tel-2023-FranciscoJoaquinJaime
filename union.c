#include <stdio.h>

union bytes {
    float valor;
    unsigned char byte[4];
} var;

int main (void) {
  int uso;
  printf("Bienvenido a visualizador de floating point.\n");
  do{

    printf("Ingrese el valor del flotante\n");
    scanf("%f", &var.valor);
    printf ("Este es el valor que ingreso: %f\n", var.valor); 
    printf("Este es el valor del numero en floating point:\n");
    printf("0x%0.2x",var.byte[3]);
    printf("%0.2x",var.byte[2]);
    printf("%0.2x",var.byte[1]);
    printf("%0.2x\n",var.byte[0]);

    printf("Si quiere ingresar otro flotante ingrese 1, si ya termino con el programa ingrese 0.\n");
    scanf("%d", &uso);

  } while (uso==1);

  printf ("Hasta la proxima");

}
