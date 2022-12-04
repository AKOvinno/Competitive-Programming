#include<stdio.h>

int main()
{
    int X, Y, N, first_part, last_part, price1, price2;

    scanf("%d %d %d", &X, &Y, &N);

    last_part = (N%3)*X;
    first_part = ((N - (N%3))/3)*Y;

    price1 = X*N;
    price2 = first_part + last_part;

    if(price1 < price2) {
        printf("%d\n", price1);
    }
    else {
        printf("%d\n", price2);
    }

    return 0;
}
