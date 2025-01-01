#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        long long int a, b, n, m, cost = 0;
        scanf("%lld %lld %lld %lld", &a, &b, &n, &m);

        if(n < m) {
            if(a > b)
                cost = b * n;
            else
                cost = a * n;
        }
        else {
            while(n > m) {
                cost += m*a;
                n -= (m+1);
            }
            if(n > 0)
                cost += n*b;
        }
        printf("%lld\n", cost);
    }
    return 0;
}
