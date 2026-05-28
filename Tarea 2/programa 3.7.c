#include <stdio.h>
/* Lanzamiento de martillo.
El programa, al recibir como dato N lanzmiento de martillo, calcula el promedio de los lanzmientos de la atleta cubana.
I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */
void main(void)
{
int I, N;
float LAN, SLA = 0;
do
{
printf("Ingrese el numero de lanzamiento:\t");
scanf("%D", &N);
}
while (N < 1 ||N > 11);
/* Se utiliza la estructura do-while para verificar que el valor de N sea correcto. */
for (I=1; I<=N; I++)
{
printf("\nIngrese el lanzamiento %d: ", I);
scanf("%f", &LAN);
SLA = SLA + LAN;
}
SLA = SLA / N;
printf("\nEl promedio de lanzamientos es: %.2f", SLA);
}
