/*Alfonso Francisco De Abiega L'Eglisse
clase 6 ejercicio 2*/

#include <stdio.h>

void main()
{
  int cantidad = 0;
  int precio, total = 0;

  do
  {
    do //Validando que sea positiva la cantidad de articulos
    {
      printf("\nIntroducir la cantidad vendida:  ");
      scanf("%d", &cantidad);
      if(cantidad < 0) //Mostrando un erro al usuario por ser cantidad negativa
        printf("Cantidad no valida");
    }
    while(cantidad < 0);

    if(cantidad > 0)
    {
      do //Validando que sea positiva el precio de articulos
      {
        printf("\nIntroduzca el precio:  ");
        scanf("%d", &precio);
        if(precio < 0) //Mostrando un erro al usuario por ser precio negativa
          printf("Precio no valido");
      }
      while(precio < 0); 
    
      total = total + (cantidad * precio); //Calculando el total de la factura
    }
  }
  while(cantidad != 0);

  printf("\nTotal de la factura es de: %d \n", total);
}
