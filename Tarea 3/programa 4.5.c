#include <stdio.h>
int cubo(int K);

int main(void)
{
int I;
for(I = 1; I <= 10; I++)
{
printf("\nEl cubo de I es: %d", cubo(I));
}
/*Llamada a la funcion cubo. El paso del parametro es por valor. */
return 0;
}
int cubo(int K)  /* K es un parametro por valor de tipo entero. */
/* La funcion calcula el cubo del parametro K. */
{
return(K*K*K);
}
