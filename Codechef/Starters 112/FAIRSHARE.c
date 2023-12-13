#include<stdio.h>
int main()
{
    int t, N, K;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &N, &K);
        int onepay = N/(K+1);
        printf("%d\n", N-(onepay*K));
    }
    return 0;
}
