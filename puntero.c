#include <stdio.h>

float valor;
unsigned char *puntero = (unsigned char *)&valor;
unsigned char uso = 0;
unsigned char op;

int main() {

  do {
    printf("Ingrese el valor de su flotante\n");
    scanf("%f", &valor);
    printf("%f\n", valor);
    printf("Ingrese el numero del byte que quiera ver. Si quiere ver todos ingrese 5\n");
    scanf("%d",&op);

    switch (op) {
      case 1: printf("0x%0.2x\n", puntero[3]);
              break;
      case 2: printf("0x%0.2x\n", puntero[2]);
              break;
      case 3: printf("0x%0.2x\n", puntero[1]);
              break;
      case 4: printf("0x%0.2x\n", puntero[0]);
              break;
      case 5: printf("0x%0.2x\n", puntero[3]);
              printf("0x%0.2x\n", puntero[2]);
              printf("0x%0.2x\n", puntero[1]);
              printf("0x%0.2x\n", puntero[0]);
              break;
      default: printf("Opcion no valida.\n");
              break;
    }

    printf("Si queire ingresar otro flotante ingrese 1, si ya termino con el programa ingrese 0.\n");
    scanf("%d", &uso);
  } while (uso==1);

  printf("Hasta la proxima");
  
}
