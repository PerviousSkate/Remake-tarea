#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

//declaracion de funciones//
float ingreso_Vm();
float ingreso_Va();
float ingreso_Im();
float ingreso_Ia();
float ingreso_frec();
float calculo_omega(float);
float calculo_Mi(float, float);
float calculo_Ai(float, float);
float calculo_Zx(float, float);
float calculo_Zy(float, float);
float calculo(float, float);
void resultado(float, float, float);

int main()
{
    //declaracion de variables//
    float frecuencia,W;
    float modulo_de_voltaje,angulo_de_voltaje;
    float modulo_de_corriente,angulo_de_corriente;
    float modulo_de_impedancia,angulo_de_impedancia;
    float Zx,Zy;
    float componente; 

    modulo_de_voltaje=ingreso_Vm();
    angulo_de_voltaje=ingreso_Va();
    modulo_de_corriente=ingreso_Im();
    angulo_de_corriente=ingreso_Ia();
    frecuencia=ingreso_frec();

    W=calculo_omega(frecuencia);
    modulo_de_impedancia=calculo_Mi(modulo_de_voltaje,modulo_de_corriente);
    angulo_de_impedancia=calculo_Ai(modulo_de_voltaje,angulo_de_voltaje);
    Zx=calculo_Zx(modulo_de_impedancia,angulo_de_impedancia);
    Zy=calculo_Zy(modulo_de_impedancia,angulo_de_impedancia);
    componente=calculo(Zy,W);
    resultado(Zy,componente,Zx);

    return 0;
}

float ingreso_Vm(){
    float modulo_de_voltaje;
    printf("Por favor ingrese el modulo de su voltaje\n");
    scanf("%f", &modulo_de_voltaje);
    return modulo_de_voltaje;
}

float ingreso_Va(){
    float angulo_de_voltaje;
    printf("Por favor ingrese el angulo de su voltaje\n");
    scanf("%f", &angulo_de_voltaje);
    return angulo_de_voltaje;
}

float ingreso_Im(){
    float modulo_de_corriente;
    printf("Por favor ingrese el modulo de su corriente\n");
    scanf("%f", &modulo_de_corriente);
    return modulo_de_corriente;
}

float ingreso_Ia(){
    float angulo_de_corriente;
    printf("Por favor ingrese el angulo de la corriente\n");
    scanf("%f", &angulo_de_corriente);
    return angulo_de_corriente;
}

float ingreso_frec(){
    float frecuencia;
    printf("Por ultimo por favor ingrese la frecuencia\n");
    scanf("%f", &frecuencia);
    return frecuencia;
}
float calculo_omega(float frecuencia){
    float W;
    W=2*PI*frecuencia;
    return W;
}

float calculo_Mi(float modulo_de_voltaje,float modulo_de_corriente){
    float modulo_de_impedancia;
    modulo_de_impedancia=modulo_de_voltaje/modulo_de_corriente;
    return modulo_de_impedancia;
}

float calculo_Ai(float angulo_de_voltaje,float angulo_de_corriente){
    float angulo_de_impedancia;
    angulo_de_impedancia=(angulo_de_voltaje-angulo_de_corriente);
    return angulo_de_impedancia;
}

float calculo_Zx(float modulo_de_impedancia,float angulo_de_impedancia){
    float Zx;
    Zx=modulo_de_impedancia*sin(angulo_de_impedancia);
    return Zx;
}

float calculo_Zy(float modulo_de_impedancia,float angulo_de_impedancia){
    float Zy;
    Zy=modulo_de_impedancia*cos(angulo_de_impedancia);
    return Zy;
}

float calculo(float Zy,float W){
    float componente;
    if(Zy<0){
        componente=-1/(Zy*W);
    }
    if(Zy>0){
        componente=Zy/W;
    }
    return componente;
}

void resultado(float Zy,float componente,float Zx){
    if(Zy>0){
        printf("el valor del inductor es: %fH\n", componente);
    }
    if(Zy<0){
        printf("el valor del capacitor es: %fF\n", componente);
    }
    printf("el valor de la resistencia es:%fΩ\n", Zx);
}
