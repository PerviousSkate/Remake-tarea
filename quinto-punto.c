#include <stdio.h>
#include <math.h>
#define PI 3.14159265359


int main()
{
    float frecuencia=0;
    float W=0;
    float inductor=0;
    float capacitor=0;
    float resistencia=0;
    float modulo_de_voltaje=0;
    float angulo_de_voltaje=0;
    float modulo_de_corriente=0;
    float angulo_de_corriente=0;
    float modulo_de_impedancia=0;
    float angulo_de_impedancia=0;
    float Zx=0;
    float Zy=0;
    
    printf("Por favor ingrese el modulo de su voltaje\n");
    scanf("%f", &modulo_de_voltaje);
    printf("Por favor ingrese el angulo del voltaje\n");
    scanf("%f", &angulo_de_voltaje);
    printf("Por favor ingrese el modulo de su corriente\n");
    scanf("%f", &modulo_de_corriente);
    printf("Por favor ingrese el angulo de la corriente\n");
    scanf("%f", &angulo_de_corriente);
    printf("Por ultimo por favor ingrese la frecuencia del circuito\n");
    scanf("%f", &frecuencia);
    W=2*PI*frecuencia;
    modulo_de_impedancia=modulo_de_voltaje/modulo_de_corriente;
    angulo_de_impedancia=(angulo_de_voltaje-angulo_de_corriente);
    Zx=modulo_de_impedancia*sin(angulo_de_impedancia);
    Zy=modulo_de_impedancia*cos(angulo_de_impedancia);
    if(frecuencia!=0){
        if(Zy!=0){
            if(Zy<0){
                capacitor=-1/(Zy*W);
                printf("Su reactancia es principalmente capacitiva, el posible capacitor valdra %f",capacitor);
            }else{
                inductor=Zy/W;
                printf("Su reactancia es principalmente inductiva, el posible inductor valdra %f",inductor);
            }
        }
    }else{
        resistencia=Zx;
        printf("Su resistencia es de:%f",resistencia);
    }
    
    return 0;
}
