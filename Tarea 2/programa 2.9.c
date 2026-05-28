#include <stdio.h>
#include <math.h>
/* Expresion.
el programa, al recibir como datos tres valores enteros, establece si los mismos sastifacen una expresion determinada.
R, T y Q: variables de tipo entero.
RES: variable de tipo real. */
void main(void)
{
float Res;
int R, T, Q;
printf("Ingrese los valores de R, T y Q: ");
scanf("%d %d", &R, &T, &Q);
Res = pow(R,4) - pow(T, 3) + 4 * pow(Q, 2);
if(Res < 820)
printf("\nR = %d\t Q = %d", R, T, Q);
}
