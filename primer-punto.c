#include <stdio.h>
#include <math.h> 
#define PI 3.14

    float imag;
    float real;
    float modulo=0;
    float angulo=0;
    float rad;
int main()
{
    printf("Ingrese por favor la parte real de su función\n");
    scanf("%f", &real);
    printf("Ingrese por favor la parte imaginaria de su función\n");
    scanf("%f", &imag);
    angulo=atan2(imag,real)*(180/PI);
    modulo=sqrt(pow(real,2)+pow(imag,2));
    printf("Tu nueva formula es: %f *e^J%f",modulo , angulo);
    return 0;
}
