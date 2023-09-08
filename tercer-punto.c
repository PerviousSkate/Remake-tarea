#include <stdio.h>
#include <math.h>
#define PI 3.14

    float real;
    float imag;
    float real2;
    float imag2;
    float angulo;
    float modulo;
    int respuesta;
int main()
{
    printf("Bienvenido al programa que permite sumar dos numeros complejos\n");
    printf("Por favor ingrese la parte real del primer numero complejo\n");
    scanf("%f", &real);
    printf("Por favor ingrese la parte imaginaria del primer numero complejo\n");
    scanf("%f", &imag);
    printf("Por favor ingrese la parte real del segundo numero complejo\n");
    scanf("%f", &real2);
    printf("Por favor ingrese la parte imaginaria del segundo numero complejo\n");
    scanf("%f", &imag2);
    real+=real2;
    imag+=imag2;
    printf("Por favor seleccione como desea ver el resultado, numero menor a 1 para cartesiano y mayor para polar\n");
    scanf("%d", &respuesta);
    if(respuesta<=1){
        printf("El resultado de la suma sera: %f +j %f",real ,imag);
    }else{
        angulo=atan2(imag,real)*(180/PI);
        modulo=sqrt(pow(real,2)+pow(imag,2));
        printf("El resultado de la suma sera: %f *e^J%f",modulo , angulo);
    }

    return 0;
}
