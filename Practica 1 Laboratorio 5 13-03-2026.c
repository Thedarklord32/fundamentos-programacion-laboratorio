#include <stdio.h>
#include <math.h>

int main() {

    float altura, radio, area, volumen, total;
    const float PI = 3.14159;

    printf("===CALCULO DE GEOMETRIA DEL CILINDRO===\n");
    printf("Ingrese el valor de radio (R): ");
    scanf("%f", &radio);

    printf("Ingrese el valor de altura (H): ");
    scanf("%f", &altura);

    if(radio <= 0 || altura <= 0) {

            printf("\nERROR: El resultado y la altura deben ser mayores a cero.\n");
            printf("No se pueden ralizar los calculos con valores invalidos.\n");

    } else {
    area = 2 * PI * radio * altura;
    volumen = PI * pow(radio,2) * altura;
    total = volumen + area;


    printf("\nRESULTADO DEL AREA Y VOLUMEN DEL CILINDRO\n");
    printf("=========================================\n");
    printf("Radio Ingresado:              %.2f\n",radio);
    printf("Altura Ingresado:             %.2f\n",altura);
    printf("=========================================\n");
    printf("Resultado del Area Lateral:   %.4f unidades cuadradas \n", area);
    printf("Resultado del Volumen:        %.4f unidades cubicas \n", volumen);
    printf("Resultado total:              %.4f total del area y volumen \n", total);
    printf("=========================================\n");
}
    return 0;
}
