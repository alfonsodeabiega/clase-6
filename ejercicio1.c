/*Alfonso Francisco De Abiega L'Eglisse
clase 6 ejercicio 1*/

#include <stdio.h>

int main()
{
  int numero, contador = 0;
  int suma = 0;

  while((contador < 10) && (suma <= 100))
  {
    printf("Introduzca un numero: ");
    scanf("%d", &numero);
    contador = contador + 1;
    suma = suma + numero;
  }

  if(contador == 10)
  {
    printf("Se han introducido 10 numeros\n");
  }
  if(suma > 100)
  {
    printf("La sumade los numeros introducidos es superior a 100\n");
  }
  return 0;
}
