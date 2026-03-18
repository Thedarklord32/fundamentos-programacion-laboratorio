#include <stdio.h>

int main () {

    char nombre[50];
    char carrera[50];
    int edad;
    int semestre;

    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", &nombre);

    printf("Ingrese la edad: ");
    scanf("%d", &edad);

    printf("Ingrese la carrera: ");
    scanf("%s", &carrera);

    printf("Ingrese el semestre: ");
    scanf("%d", &semestre);

    printf("\n=====Datos del Estudiante=====\n");
    printf("Nombre del Estudiante: %s\n",nombre);
    printf("Edad: %d\n",edad);
    printf("Carrera: %s\n",carrera);
    printf("Semestre: %d\n",semestre);

    return 0;

    }
