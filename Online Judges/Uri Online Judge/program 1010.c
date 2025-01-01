#include<stdio.h>
int main()
{
   float price1,price2,total;

    int code1,code2,unit1,unit2;

    scanf("%d %d %f",&code1,&unit1,&price1);

    scanf("%d %d %f",&code2,&unit2,&price2);

    total =  price1*unit1+price2*unit2;

    printf("VALOR A PAGAR: R$ %0.2f\n",total);

    return 0;
}
