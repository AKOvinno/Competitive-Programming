#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, max1 = 0, max2 = 0, max1_index, max2_index;
        long long int total;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
            if(ara[i] > max1) {
                max1 = ara[i];
                max1_index = i;
            }
        }
        for(int i = 0; i < n; i++) {
            if(i == max1_index) continue;
            if(ara[i] > max2) {
                max2 = ara[i];
                max2_index = i;
            }
        }
        if(max1_index+1 == n) {
            total = max1 + max2;
        }
        else {
            total = max1 + ara[n-1];
        }
        printf("%lld\n", total);
    }
    return 0;
}
