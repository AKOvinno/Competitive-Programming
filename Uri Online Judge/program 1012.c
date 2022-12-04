#include<stdio.h>
int main()
{
    float A,B,C;

    scanf("%f %f %f",&A,&B,&C);

    double a,b,c,d,e,pi;

    pi = 3.14159;

    a =0.5*A*C;

    b =pi*C*C;

    c =(A+B)/2*C;

    d =B*B;

    e =A*B;

    printf("TRIANGULO: %0.3lf\n",a);

    printf("CIRCULO: %0.3lf\n",b);

    printf("TRAPEZIO: %0.3lf\n",c);

    printf("QUADRADO: %0.3lf\n",d);

    printf("RETANGULO: %0.3lf\n",e);
    return 0;
}
