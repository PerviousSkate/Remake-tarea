#include <stdio.h>
#include <math.h>
#define PI 3.14

//declaracion de funciones//
float ingreso_modulo();
float ingreso_angulo();
float calculo_real(float, float);
float calculo_imaginario(float, float);
void respuesta(float, float);

int main()
{
    //declaracion de variables//
    float modulo,angulo;
    float real,imag;

    modulo=ingreso_modulo();
    angulo=ingreso_angulo();

    real=calculo_real(modulo, angulo);
    imag=calculo_imaginario(modulo, angulo);
    respuesta(real, imag);
    return 0;
}

float ingreso_modulo(){
    float modulo;
    printf("Bienvenido al programa que permite pasar de polar a binomica\n");
    printf("Por favor ingrese el modulo\n");
    scanf("%f", &modulo);
    return modulo;
}

float ingreso_angulo(){
    float angulo;
    printf("Por favor ingrese el angulo\n");
    scanf("%f", &angulo);
    angulo*=(PI/180);
    return angulo;
}

float calculo_real(float modulo, float angulo){
    float real;
    real=cos(angulo)*modulo;
    return real;
}

float calculo_imaginario(float modulo, float angulo){
    float imag;
    imag=sin(angulo)*modulo;
    return imag;
}

void respuesta(float real, float imag){
    printf("Tu nueva formula sera: %f+J%f",real , imag);
}
