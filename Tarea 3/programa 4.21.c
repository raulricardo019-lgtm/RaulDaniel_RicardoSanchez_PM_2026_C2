#include <stdio.h>
int z, y;
int F1(float);
void F2(float, int *);
void main(void)
{
int W;
float x;
z = 5;
y = 7;
W = 2;
x = (float)y / z;
printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, W);
F2 (x, &W);
printf("\nPrograma Principal: %d %d %.2f %d", z, y, x, W);
}
int F1(float x)
{
int k;
if (x!=0)
{
k = z - y;
x++;
}
else
k = z + y;
printf("\nF1: %d %d %2.f %f", z, y, x, k);
return(k);
}
void F2(float t, int *r)
{
int y;
y = 5;
z = 0;
printf("\nF2: %d %d %2.f %d", z, y, t, *r);
if (z == 0)
{
z = (*r) * 2;
t = (float) z / 3;
printf("\nIngresa el valor: ");
scanf("%d", r);
printf("\nF2: %d %d %2.f %d", z, y, t, *r);
}
else
{
z = (*r) * 2;
printf("\nF2: %d %d %.2f %d", z, y, t, *r);
}
*r = F1(t);
}
