#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int difference = 1005;
    int index1, index2;
    for(int i = 1; i < n; i++) {
        if(i == n-1) {
            if(abs(ara[i] - ara[0]) < difference) {
                difference = abs(ara[i] - ara[i-1]);
                index1 = n;
                index2 = 1;
                break;
            }
        }
        if(abs(ara[i] - ara[i-1]) < difference) {
            difference = abs(ara[i] - ara[i-1]);
            index1 = i;
            index2 = i+1;
        }
    }
    printf("%d %d\n", index1, index2);
    return 0;
}
