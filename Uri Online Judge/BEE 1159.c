#include<stdio.h>
int main()
{
    int i, j, X, sum = 0;

    while (1) {
        scanf("%d", &X);
        if(X == 0) {
            break;
        }
        if(X % 2 != 0) {
            X+=1;
        }
        for(j = 1; j <= 5; j++) {
            sum+=X;
            X+=2;
        }
        printf("%d\n", sum);
        sum = 0;
    }
}
