#include<stdio.h>
int main()
{
    long long int n, k, sum = 0;
    scanf("%lld %lld", &n, &k);
    long long int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%lld", &ara[i]);
    }
    if(k >= n) {
        printf("0\n");
        return 0;
    }
    else if (k > 0 && k < n) {
        for(int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if(ara[i] < ara[j]) {
                    int temp = ara[i];
                    ara[i] = ara[j];
                    ara[j] = temp;
                }
            }
        }
        for(int i = 0; i < k; i++) {
            ara[i] = 0;
        }
    }
    for(int i = 0; i < n; i++) {
        sum += ara[i];
    }
    printf("%lld\n", sum);
    return 0;
}
