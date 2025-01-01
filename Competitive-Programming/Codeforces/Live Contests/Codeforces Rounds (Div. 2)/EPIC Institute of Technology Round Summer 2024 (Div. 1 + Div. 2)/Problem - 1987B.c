#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        long long int n;
        scanf("%lld", &n);
        long long int ara[n];
        for(long long int i = 0; i < n; i++) {
            scanf("%lld", &ara[i]);
        }
        long long int count = 0;
        long long int final_add = -1;
        for(long long int i = 1; i < n; i++) {
            if(ara[i] < ara[i-1]) {
                long long int sub = ara[i-1] - ara[i];
                if(sub > final_add) {
                    final_add = sub;
                }
                count += sub;
                ara[i] = ara[i-1];
            }
        }
        if(final_add != -1) count += final_add;
        printf("%lld\n", count);
    }
    return 0;
}
