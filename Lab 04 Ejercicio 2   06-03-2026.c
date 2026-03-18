#include <stdio.h>

int main () {

    char nombre[50];
    int cantidad;
    float total;
    float precio;

    printf("\n===Ingrese Datos===\n");

    printf("Ingrese el nombre del cliente: "),
    scanf("%s", &nombre);

    printf("Ingrese la cantidad de productos comprados: ");
    scanf("%d", &cantidad);

    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    total = cantidad * precio;

    printf("\m===DATOS EN LA FACTURA===\n");
    printf("NOMBRE.\tCANT.\tPREC.\tTOTAL\n");
    printf("================================================================\n");

    printf("%s\t%d\t%.2f\t%.2f\n", nombre, cantidad, precio, total);

    printf("================================================================\n");

    return 0;
     }
