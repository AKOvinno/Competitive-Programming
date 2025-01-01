#include<stdio.h>

int main()
{
    int i, N, fact = 1;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        fact*=i;
    }
    printf("%d\n", fact);
    return 0;
}
