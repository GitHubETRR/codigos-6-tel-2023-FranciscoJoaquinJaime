#include <stdio.h>
int uso = 0;
int dab = 0;

void conversor (int, int);

union {
float valor;
struct{
    unsigned int mantisa : 23;
    unsigned int exponente : 8;
    unsigned int signo : 1;
  } ;
}var;

int main(void) {
  do {
    printf("Ingrese el valor de su flotante\n");
    scanf("%f", &var.valor);
    printf("Este es el numero en floating point:\n");
    printf("Bit de signo: %d\n", var.signo);
    conversor (var.mantisa, var.exponente);
    printf("\n");

    printf("Si queire ingresar otro flotante ingrese 1, si ya termino con el programa ingrese 0.\n");
    scanf("%d", &uso);
  } while (uso==1);

  printf("Hasta la proxima");
}

void conversor(int mantisa, int exponente){
    printf("Exponente: ");
    for (int i = 7; i >= 0; i--){
      dab = ((exponente>>i)&0x01);
      if (dab)printf("1");
      else printf("0");
    }
    printf("\n");
    printf("Mantisa: ");
    for (int i = 22; i >= 0; i--){
      dab = ((mantisa>>i)&0x01);
      if (dab)printf("1");
      else printf("0");
    }
}
