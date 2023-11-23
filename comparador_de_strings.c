#include <stdio.h>


unsigned char string1 [30] = {0};
unsigned char string2 [30] = {0};
int a; 
char uso = 0;
char con;

int main(void) {
  printf ("Bienvenido al comparador de strings\n");

  do {

    do {
      printf("Ingrese una palabra de no más de 30 caracteres\n");
      scanf("%s", string1);
      printf("Ingrese otra palabra tambien de no más de 30 caracteres\n");
      scanf("%s", string2);
      printf("Este es su palabra: %s\n",string1);
      printf("Y esta la segunda: %s\n",string2);
      printf("Confirma que estas son sus palbras? Ingrese 1 para seguir o 0 para corregirlas\n");
      scanf("%d", &con);
    } while (con == 0);
  
    for (int i = 0; i <= 30; i++) {
      if (string1[i] == string2[i]) {
        a=1;
      }  else{
        a=0;
        break;
      }   
    }
    if (a==1) printf("Sus dos palabras son iguales\n");
    else if (a==0) printf("Las palabras que escribio no son iguales\n");
    printf("Si queire reutilizar el programa ingrese 1, si ya termino con este ingrese 0.\n");
    scanf("%d", &uso);
  } while (uso == 1);

  printf("Hasta la proxima");
}

  printf("Hasta la proxima");
}
