#include<stdio.h>
int main()
{
    double NUMBER, A, B, SALARY;
    scanf("%d", &NUMBER);
    scanf("%lf", &A);
    scanf("%lf", &B);
    SALARY = A*B;
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %0.2lf\n", SALARY);
    return 0;
}

