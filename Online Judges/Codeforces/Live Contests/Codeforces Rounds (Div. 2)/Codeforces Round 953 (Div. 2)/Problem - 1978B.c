#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        long long int n, a, b, k;
        scanf("%lld %lld %lld", &n, &a, &b);
        long long int max_profit = 0;
        if(a >= b) {
            max_profit = n * a;
        }
        else {
            k = b - a + 1;
            if(k > n) {
                k -= (k - n);
            }
            max_profit += (k * b);
            n -= k;
            if(k > 1) {
                long long int value = k-1;
                long long int gauss = (value * (value + 1) ) / 2;
                max_profit -= gauss;
            }
            max_profit += (n * a);
        }
        printf("%lld\n", max_profit);
    }
    return 0;
}
