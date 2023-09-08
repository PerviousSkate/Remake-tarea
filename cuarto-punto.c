#include <stdio.h>
#include <math.h>
#define PI 3.14

    float frecuencia;
    float real;
    float imag;
    float W;
    float inductor;
    float capacitor;
    float resistencia;
int main()
{
    printf("Por favor ingrese la parte real de su impedancia\n");
    scanf("%f", &real);
    printf("Por favor ingrese la parte imaginaria de su impedancia\n");
    scanf("%f", &imag);
    printf("Por ultimo por favor ingrese la frecuencia\n");
    scanf("%f", &frecuencia);
    W=2*PI*frecuencia;
    if(frecuencia!=0){
        if(imag!=0){
            if(imag<0){
                capacitor=-1/(imag*W);
                printf("Su reactancia es principalmente capacitiva, el posible capacitor valdra %f",capacitor);
            }else{
                inductor=imag/W;
                printf("Su reactancia es principalmente inductiva, el posible inductor valdra %f",inductor);
            }
        }
    }else{
        resistencia=real;
        printf("Su resistencia es de:%f",resistencia);
    }
    

    return 0;
}
