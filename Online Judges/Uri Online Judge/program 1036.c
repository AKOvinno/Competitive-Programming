#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,m,n,p;
    scanf("%f%f%f",&a,&b,&c);
    m=(b*b)-(4*a*c);
    if(m<0)
    {
        printf("Impossivel calcular\n");
    }
    else if (a == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        n=((-b) + sqrt(m))/(a+a);
        p=((-b) - sqrt(m))/(a+a);
        printf("R1 = %.5f\n",n);
        printf("R2 = %.5f\n",p);
    }
    return 0;
}
