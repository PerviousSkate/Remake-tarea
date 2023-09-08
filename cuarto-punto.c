#include <stdio.h>
#include <math.h>
#define PI 3.14

//declaracion de funciones//
float calculo_omega(float frecuencia);
float pedido_de_real();
float pedido_de_imaginario();
float pedido_de_frecuencia();
float calculo(float, float);
void resultado(float, float, float);

int main()
{
    //declaracion de variables//
    float frecuencia;
    float real,imag;
    float W;
    float componente;

    real=pedido_de_real();
    imag=pedido_de_imaginario();
    frecuencia=pedido_de_frecuencia();

    W=calculo_omega(frecuencia);
    componente=calculo(imag, W);
    resultado(componente, real, imag);

    return 0;
}

float calculo_omega(float frecuencia){
    float W;
    W=2*PI*frecuencia;
    return W;
}

float pedido_de_real(){
    float real;
    printf("Por favor ingrese la parte real de su impedancia\n");
    scanf("%f", &real);
    return real;
}

float pedido_de_imaginario(){
    float imag;
    printf("Por favor ingrese la parte imaginaria de su impedancia\n");
    scanf("%f", &imag);
    return imag;
}

float pedido_de_frecuencia(){
    float frecuencia;
    printf("Por ultimo por favor ingrese la frecuencia\n");
    scanf("%f", &frecuencia);
    return frecuencia;
}

float calculo(float imag,float W){
    float componente=0;
    if(imag<0){
        componente=-1/(imag*W);
    }
    if(imag>0){
        componente=imag/W;
    }
    return componente;
}

void resultado(float componente,float real,float imag){
    if(imag>0){
        printf("el valor del inductor es: %fH\n", componente);
    }
    if(imag<0){
        printf("el valor del capacitor es: %fF\n", componente);
    }
    printf("el valor de la resistencia es:%fΩ\n", real);
}
