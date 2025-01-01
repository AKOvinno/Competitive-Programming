#include<stdio.h>

int main()
{
    long long int n, moves = 0;
    int i;
    scanf("%lld", &n);
    long long int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%lld", &ara[i]);
    }
    for(i = 0; i < n-1; i++) {
        if(ara[i] > ara[i+1]) {
            moves += (ara[i] - ara[i+1]);
            ara[i+1] = ara[i];
        }
    }
    printf("%lld\n", moves);
    return 0;
}
