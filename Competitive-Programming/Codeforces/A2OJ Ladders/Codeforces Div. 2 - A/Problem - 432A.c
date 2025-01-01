#include<stdio.h>
int main()
{
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        if(5-ara[i] >= k) {
            count++;
        }
    }
    printf("%d\n", count/3);
    return 0;
}
