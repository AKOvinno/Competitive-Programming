#include<stdio.h>
int main()
{
    long long int n, max = 0, min = 1000000000, max_count = 0, min_count = 0;
    scanf("%lld", &n);
    long long int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%lld", &ara[i]);
        if(ara[i] > max) {
            max = ara[i];
        }
        if(ara[i] < min) {
            min = ara[i];
        }
    }
    int diff = max - min;
    for(int i = 0; i < n; i++) {
        if(ara[i] == max) {
            max_count++;
        }
        if(ara[i] == min) {
            min_count++;
        }
    }
    long long int total;
    if(min == max) {
        total = (n*(n-1))/2;
    }
    else {
        total = max_count * min_count;
    }
    printf("%d %lld\n", diff, total);
    return 0;
}
