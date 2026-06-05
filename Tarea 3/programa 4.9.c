#include <stdio.h>
int suma(int X, int Y)
{
return (X+Y);
}
int resta(int X, int Y)
{
return (X-Y);
}
int Control(int (*apf) (int, int), int X, int Y)
{
int RES;
RES = (*apf) (X, Y);
return (RES);
}
void main(void)
{
int R1, R2;
R1 = Control(suma, 15, 5); /* Se pasa como parametro la funcion suma */
R2 = Control(resta, 10, 4); /* Se pasa como parametro la funcion resta */
printf("\nResultado 1: %d", R1);
printf("\nResultado 2: %d", R2);
}
