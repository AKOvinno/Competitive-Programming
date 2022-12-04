#include<stdio.h>

int main()
{
    int i, n, k, count = 0;
    scanf("%d", &n);
    scanf("%d", &k);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < n; i++) {
        if(ara[i] >= ara[k-1] && ara[i] > 0) {
            count++;
        }
    }
    printf("%d\n", count);
}
