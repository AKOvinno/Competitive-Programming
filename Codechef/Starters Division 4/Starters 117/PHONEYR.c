#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    int a = X % 10;
    X = X/10;
    int b = X % 10;
    printf("K%d%d", b, a);
    return 0;
}

