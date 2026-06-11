#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
int opcion;
int cant_jugadas = 1;
int num_ganador;
int I;
int NUMEROS[100];
float DINERO[100];
float premio_total;
float premio_jugada;

srand(time(NULL));

do
{
printf("\n--- MENU DE LOTERIA ---");
printf("\n1. Jugar");
printf("\n2. Elegir cantidad de jugadas (Actual: %d)", cant_jugadas);
printf("\n3. Salir");
printf("\nSeleccione una opcion: ");
scanf("%d", &opcion);

switch(opcion)
{
case 1:
printf("\n--- MODULO DE JUEGO (REGISTRA TUS APUESTAS) ---\n");
premio_total = 0;

for (I = 0; I < cant_jugadas; I++)
{
printf("\nJugada #%d:", I + 1);

do
{
printf("\n -> Ingrese el numero a jugar (1-40): ");
scanf("%d", &NUMEROS[I]);

if (NUMEROS[I] < 1 || NUMEROS[I] > 40)
{
printf("\nNumero invalido. Debe estar entre 1 y 40.\n");
}
} while (NUMEROS[I] < 1 || NUMEROS[I] > 40);

printf(" -> Ingrese el dinero a apostar en esta jugada: ");
scanf("%f", &DINERO[I]);
}

num_ganador = (rand() % 40) + 1;

printf("\n==============================================");
printf("\n[SORTEO] ¡Girando la tombola de manera automatica!...");
printf("\nEl Numero Ganador oficial es: %d", num_ganador);
printf("\n==============================================\n");

printf("\n--- RESULTADOS DEL SORTEO ---");
for (I = 0; I < cant_jugadas; I++)
{
if (NUMEROS[I] == num_ganador)
{
premio_jugada = DINERO[I] * 1000.0;
printf("\nJugada #%d [No. %d]: ¡FELICIDADES! ADIVINASTE. Ganaste: %.2f", I + 1, NUMEROS[I], premio_jugada);
premio_total += premio_jugada;
}
else
{
printf("\nJugada #%d [No. %d]: PERDISTE. (Monto perdido: %.2f)", I + 1, NUMEROS[I], DINERO[I]);
}
}

printf("\n----------------------------------------------");
printf("\nResultado de la ronda: ");
if (premio_total > 0)
{
printf("¡Felicidades! Te llevas un total de: %.2f\n", premio_total);
}
else
{
printf("No obtuviste premios en esta ronda. ¡Suerte para la proxima!\n");
}
break;

case 2:
do
{
printf("\n¿Cuantas jugadas desea realizar en total (1-100)?: ");
scanf("%d", &cant_jugadas);

if (cant_jugadas < 1 || cant_jugadas > 100)
{
printf("Cantidad fuera de rango (Permitido de 1 a 100).\n");
}
} while (cant_jugadas < 1 || cant_jugadas > 100);

printf("Cantidad de jugadas actualizada exitosamente a: %d\n", cant_jugadas);
break;

case 3:
printf("\nSaliendo del programa. ¡Gracias por usar el sistema de loteria!\n");
break;

default:
printf("\nOpcion no valida en el menu. Intente de nuevo.\n");
break;
}
} while (opcion != 3);
}
