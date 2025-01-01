#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t) {
        int n, i;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        int largest = ara[0];
        for(i = 0; i < n; i++) {
            if(ara[i] > largest) {
                largest = ara[i];
            }
        }
        int sec_largest = 0;
        for(i = 0; i < n; i++) {
            if(ara[i] > sec_largest && ara[i] < largest) {
                sec_largest = ara[i];
            }
        }
        for(i = 0; i < n; i++) {
            if(ara[i] < largest) {
                ara[i] -= largest;
            }
            else if(sec_largest == 0) {
                ara[i] = 0;
            }
            else if(ara[i] == largest) {
                ara[i] -= sec_largest;
            }
        }
        for(i = 0; i < n; i++) {
            printf("%d ", ara[i]);
        }
        printf("\n");
        t--;
    }
    return 0;
}
