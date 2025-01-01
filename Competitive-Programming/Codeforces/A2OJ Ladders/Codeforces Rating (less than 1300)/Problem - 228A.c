#include<stdio.h>
int main()
{
    int n = 4, count = 0;
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(ara[j] < ara[j-1]) {
                int temp = ara[j];
                ara[j] = ara[j-1];
                ara[j-1] = temp;
            }
        }
    }
    for(int i = 1; i < n; i++) {
        if(ara[i] == ara[i-1]) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
