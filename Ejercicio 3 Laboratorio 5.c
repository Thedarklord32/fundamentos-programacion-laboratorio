#include <stdio.h>

int main() {
    char nombre[100];
    int antiguedad;
    float sueldo, descuento, bono=0, totalGanado, excedente=0, rc=0, impuesto, salarioNeto;

    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", &nombre);

    printf("Ingrese los años de antiguedad: ");
    scanf("%d", &antiguedad);

    printf("Ingrese el sueldo basico: ");
    scanf("%f", &sueldo);

    if(antiguedad > 5){
        bono = sueldo  * 0.10;
        }

    totalGanado = sueldo + bono;

    descuento = totalGanado * 0.1271;

    if(totalGanado > 9500){
            excedente = totalGanado - 9500;
            rc = excedente * 0.13;
    }

    salarioNeto = totalGanado - descuento - rc;

    printf("\n====DATOS DEL TRABAJADOR====\n");
    printf("Nombre: %s\n", nombre);
    printf("Antiguedad: %d años\n", antiguedad);
    printf("Sueldo basico: %.2f Bs\n", sueldo);
    printf("Bono de antiguedad: %.2f Bs\n", bono);
    printf("Total ganado: %.2f Bs\n", totalGanado);
    printf("Descuento AFP: %.2f Bs\n", descuento);
    printf("Descuento RC-IVA: %.2f Bs\n", rc);
    printf("Salario neto: %.2f Bs\n", salarioNeto);

    return 0;
}
