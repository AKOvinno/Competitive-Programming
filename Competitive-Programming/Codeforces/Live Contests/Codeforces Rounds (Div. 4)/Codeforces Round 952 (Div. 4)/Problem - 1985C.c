#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--) {
        int n, count = 0, max = -1;
        long long int sum = 0;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        if(ara[0] == 0) count++;
        max = ara[0];
        sum += ara[0];
        for(int i = 1; i < n; i++) {
            long long int temp_sum = 0;
            if(ara[i] > max) {
                max = ara[i];
            }
            sum += ara[i];
            temp_sum = sum - max;
            if(temp_sum == max) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

