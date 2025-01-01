#include <stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);
    int input = n*100;

    printf("NOTAS: \n");
    printf("%d nota(s) de R$ 100,00\n", input/10000);
    input %= 10000;
    printf("%d nota(s) de R$ 50,00\n", input/5000);
    input %= 5000;
    printf("%d nota(s) de R$ 20,00\n", input/2000);
    input %= 2000;
    printf("%d nota(s) de R$ 10,00\n", input/1000);
    input %= 1000;
    printf("%d nota(s) de R$ 5,00\n", input/500);
    input %= 500;
    printf("%d nota(s) de R$ 2,00\n", input/200);
    input %= 200;
    printf("MOEDAS: \n");
    printf("%d moeda(s) de R$ 1,00\n", input/100);
    input %=100;
    printf("%d moeda(s) de R$ 0.50\n", input/50);
    input %= 50;
    printf("%d moeda(s) de R$ 0.25\n", input/25);
    input %= 25;
    printf("%d moeda(s) de R$ 0.10\n", input/10);
    input %= 10;
    printf("%d moeda(s) de R$ 0.05\n", input/5);
    input %= 5;
    printf("%d moeda(s) de R$ 0.01\n", input/1);

     return 0;
}



