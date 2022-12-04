#include<stdio.h>
int main()
{
    double A;
    int X, Y;

    scanf("%d %d", &X, &Y);
    A = (Y*X)/12.0;

    printf("%0.3lf\n", A );
    return 0;
}
