#include <stdio.h>
#include <math.h>
#define PI 3.14

//declaracion de funciones//
float ingreso_real();
float ingreso_imaginario();
float ingreso_real2();
float ingreso_imaginario2();
float calculo_real(float, float);
float calculo_imag(float, float);
float respuesta(float, float, float, float);

int main()
{
    //declaracion de variables//
    float real,imag;
    float real2,imag2;
    float angulo,modulo;
    float imprimir;

    real=ingreso_real();
    imag=ingreso_imaginario();
    real2=ingreso_real2();
    imag2=ingreso_imaginario2();

    real=calculo_real(real, real2);
    imag=calculo_imag(imag, imag2);
    imprimir=respuesta(real, imag, angulo, modulo);

    return 0;
}

float ingreso_real(){
    float real;
    printf("Bienvenido al programa que permite sumar dos numeros complejos\n");
    printf("Por favor ingrese la parte real del primer numero complejo\n");
    scanf("%f", &real);
    return real;
}

float ingreso_imaginario(){
    float imag;
    printf("Por favor ingrese la parte imaginaria del primer numero complejo\n");
    scanf("%f", &imag);
    return imag;
}

float ingreso_real2(){
    float real2;
    printf("Por favor ingrese la parte real del segundo numero complejo\n");
    scanf("%f", &real2);
    return real2;
}

float ingreso_imaginario2(){
    float imag2;
    printf("Por favor ingrese la parte imaginaria del segundo numero complejo\n");
    scanf("%f", &imag2);
    return imag2;
}

float calculo_real(float real,float real2){
    real+=real2;
    return real;
}

float calculo_imag(float imag,float imag2){
    imag+=imag2;
    return imag;
}

float respuesta(float real,float imag,float modulo,float angulo){
    float respuesta;
    printf("Por favor seleccione como desea ver el resultado, numero menor a 1 para cartesiano y mayor para polar\n");
    scanf("%f", &respuesta);
    if(respuesta<=1){
        printf("El resultado de la suma sera: %f +j %f",real ,imag);
    }else{
        angulo=atan2(imag,real)*(180/PI);
        modulo=sqrt(pow(real,2)+pow(imag,2));
        printf("El resultado de la suma sera: %f *e^J%f",modulo , angulo);
    }
}
