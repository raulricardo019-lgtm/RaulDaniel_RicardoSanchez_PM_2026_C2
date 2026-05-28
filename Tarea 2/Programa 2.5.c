#include <stdio.h>
#include <math.h>
/* funcion matematica
El programa obtiene el resultado de una funcion.
OP y T: variables de tipo entero.
RES: variable de tipo real. */
void main(void)
{
int OP, T;
float Res;
printf("ingrese la opcion del calculo y el valor entero: ");
scanf("%d %d", &OP, &T);
switch(OP)
{
case 1: Res = T / 5;
break;
case 2: Res = pow(T,T);
/* La funcion pow esta definida en la biblioteca math.h */
break;
case 3:
case 4: Res = 6 * T/2;
break;
default: Res = 1;
break;
}
printf("\nResultado: %7.2f", Res);
}
