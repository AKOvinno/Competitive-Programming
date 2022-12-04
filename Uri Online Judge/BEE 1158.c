#include<stdio.h>
int main()
{
    int i, j, test, X, Y, sum = 0;
    scanf("%d", &test);
    for(i =1; i <= test; i++) {
        scanf("%d %d", &X, &Y);
        if(X % 2 == 0) {
            X+=1;
        }
        for(j = 1; j <= Y; j++) {
            sum+=X;
            X+=2;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}
