#include <stdio.h>


int main() {

    float examen, proyecto;
    float p1, p2, p3;
    float nota_final;

    printf("\n====SISTEMA DE CALIFICACIONES PONDERADO====\n");
    printf("Ingrese lo nota de la practica 1: ");
    scanf("%f", &p1);

    printf("Ingrese lo nota de la practica 2: ");
    scanf("%f", &p2);

    printf("Ingrese lo nota de la practica 3: ");
    scanf("%f", &p3);

    printf("Ingrese lo nota del examen teorico: ");
    scanf("%f", &examen);

    printf("Ingrese lo nota del proyecto final: ");
    scanf("%f", &proyecto);

    nota_final = (p1*0.15) + (p2*0.15) + (p3*0.15) + (examen*0.35) + (proyecto*0.20);

    printf("\n============================================\n");
    printf("La nota final ponderada es: %.2f\n",nota_final);


    if(nota_final >= 51) {
            printf("Estado: APROBADO");
    }else{
            printf("Estado: REPROBADO");
}
    printf("\n============================================\n");


    return 0;
    }
