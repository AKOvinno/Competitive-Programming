#include<stdio.h>
const unsigned long long int mx = 1000000001;
unsigned long long int ara[mx];
int main()
{
    unsigned long long int n, distinct = 0, i;
    scanf("%llu", &n);
    for(i = 0; i < mx; i++) {
        ara[i] = 0;
    }
    for(i = 0; i < n; i++) {
        int num;
        scanf("%llu", &num);
        ara[num]++;
    }
    for(i = 0; i < mx; i++) {
        if(ara[i] > 0) {
            distinct++;
        }
    }
    printf("%llu\n", distinct);
    return 0;
}
