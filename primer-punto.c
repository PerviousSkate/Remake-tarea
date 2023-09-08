#include <stdio.h>
#include <math.h> 
#define PI 3.14

//declaracion de funciones//
float pedido_de_real();
float pedido_de_imaginario();
float calculo_angulo(float);
float calculo_modulo(float);
void respuesta(float, float);

int main()
{
    //declaracion de varaibles//
    float imag,real;
    float modulo,angulo;

    real=pedido_de_real();
    imag=pedido_de_real();

    angulo=calculo_angulo(imag, real);
    modulo=calculo_modulo(imag, real);
    respuesta(angulo, modulo)
    return 0;
}

float pedido_de_real(){
    float real;
    printf("Ingrese por favor la parte real de su función\n");
    scanf("%f", &real);
    return real;
}

float pedido_de_imagniario(){
    float imag;
    printf("Ingrese por favor la parte imaginaria de su función\n");
    scanf("%f", &imag);
    return imag;
}

float calculo_angulo(float imag, float real){
    float angulo;
    angulo=atan2(imag,real)*(180/PI);
    return angulo;
}

float calculo_modulo(float imag, float real){
    float modulo;
    modulo=sqrt(pow(real,2)+pow(imag,2));
    return modulo;
}

void respuesta(float angulo, float modulo){
    printf("Tu nueva formula es: %f *e^J%f",modulo , angulo);
}
