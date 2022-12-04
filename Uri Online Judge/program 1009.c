#include<stdio.h>
int main()
{
    double salary, sold, asold, TOTAL;
    char name[100];
    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sold);
    asold = sold*15/100;
    TOTAL = salary+asold;
    printf("TOTAL = R$ %0.2lf\n", TOTAL);
    return 0;
}
