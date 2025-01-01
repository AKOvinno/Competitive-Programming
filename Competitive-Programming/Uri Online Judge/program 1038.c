#include<stdio.h>
int main()
{
    double ara[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int n, quantity, price;
    scanf("%d", &n);
    scanf("%d", &quantity);
    double total = ara[n-1] * quantity;
    printf("Total: R$ %0.2lf \n", total);
    return 0;
}
