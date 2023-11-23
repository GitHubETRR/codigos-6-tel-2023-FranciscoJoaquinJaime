#include <stdio.h>
#define CAN 5
#define LIM 30
unsigned char uso = 0;
unsigned char op; 
struct puntos {
  char nombre [LIM];
  char apellido [LIM];
  unsigned char edad;
  int dni;
  unsigned char zipcode;
} punto[CAN];

int main(void) {
  unsigned char i;
  for (i=0;i<CAN;i++){
    printf("ESTE ES EL ALUMNO %d\n ", i+1);
    printf ("Ingrese el nombre del alumno\n");
    scanf("%s",&punto[i].nombre);
    printf ("Ingrese el apellido del alumno\n");
    scanf("%s",&punto[i].apellido);
    printf ("Ingrese la edad del alumno\n");
    scanf("%u",&punto[i].edad);
    printf ("Ingrese el DNI del alumno\n");
    scanf("%d",&punto[i].dni);
    printf ("Ingrese el codigo postal\n");
    scanf("%u",&punto[i].zipcode);
    
  }
  
  do {
    printf("Ingrese el numero que se le asigno al alumno para ver su informacion\n");
    scanf("%d", &op);
    op--;
    printf("Nombre = %s\n", punto[op].nombre);
    printf("Apellido = %s\n", punto[op].apellido);
    printf("Edad = %u\n", punto[op].edad);
    printf("DNI = %d\n", punto[op].dni);
    printf("Codigo postal = %u\n", punto[op].zipcode);

    printf("Si quiere ver otro alumno ingrese 1, si ya termino con el programa ingrese 0.\n");
    scanf("%d", &uso);
  } while(uso==1);

  printf ("Hasta la proxima");
}
