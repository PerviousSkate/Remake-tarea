#include <stdio.h>
#include <math.h>
#define PI 3.14

    float modulo;
    float angulo;
    float real;
    float imag;
int main()
{
    printf("Bienvenido al programa que permite pasar de polar a binomica\n");
    printf("Por favor ingrese el modulo\n");
    scanf("%f", &modulo);
    printf("Por favor ingrese el angulo\n");
    scanf("%f", &angulo);
    angulo*=(180/PI);
    real=cos(angulo)*modulo;
    imag=sin(angulo)*modulo;
    printf("Tu nueva formula sera: %f+J%f",real , imag);

    return 0;
}
