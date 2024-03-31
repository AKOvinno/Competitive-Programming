#include<stdio.h>
int main()
{
    int n, max, min, count = 0;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    max = ara[0];
    min = ara[0];
    for(int i = 1; i < n; i++) {
        if(ara[i] > max) {
            max = ara[i];
            count++;
        }
        if(ara[i] < min) {
            min = ara[i];
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
