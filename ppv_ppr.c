#include <stdio.h>

int uso = 0;
void ppv (int);
void ppr (int*);

int main(void) {
  printf("Bienvenido!\n");
  do {
    int a;
    int b;
    int *p_b = &b;
    printf("Escriba por una variable para el pasaje por valor:\n");
    scanf("%d", &a);
    printf("Escriba por una variable para el pasaje por referencia:\n");
    scanf("%d", &b);
    ppv (a);
    printf("La variable a en el main vale: %d\n", a);
    ppr (p_b);
    printf("La variable b en el main vale: %d\n", b);

    printf("Si queire verlo otra vez pero con otros valores, ingrese 1, si ya finalizo con el programa, ingrese 0.\n");
    scanf("%d", &uso);

  }  while (uso==1);
  
  printf("Hasta la proxima");
}


void ppv (int a) {
  a++;
  printf("La variable a en ppv vale: %d\n", a);
}

void ppr (int *p_b) {
  *p_b = *p_b + 1;
  printf("El valor de b en ppr vale: %d\n", *p_b);
}
