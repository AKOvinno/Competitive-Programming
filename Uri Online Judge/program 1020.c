#include<stdio.h>
int main()
{
    int n, n1, n2, n3;
    scanf("%d", &n);
    n1=n/365;
    printf("%d ano(s)\n", n1);
    n2=n%365/30;
    printf("%d mes(es)\n", n2);
    n3=n%365%30;
    printf("%d dia(s)\n", n3);
    return 0;
}
