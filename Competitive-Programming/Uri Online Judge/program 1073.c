#include<stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);
    for(i = 2; i <=N; i++) {
        if ((i % 2) == 0) {
            printf("%d^2 = %d\n", i, (i*i));
        }
    }
    return 0;
}
