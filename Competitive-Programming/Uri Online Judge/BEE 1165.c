#include<stdio.h>
int main()
{
    int i, X, N, is_prime, test = 0;

    scanf("%d", &N);

    do {

            scanf("%d", &X);
            test++;
            is_prime = 1;

        for(i = 2; i <= (X/2); i++) {
            if(X % i == 0) {
                is_prime = 0;
            }
        }
        if(is_prime == 1) {
            printf("%d eh primo\n", X);
        }
        else {
            printf("%d nao eh primo\n", X);
        }

    } while (test != N);
    return 0;
}

