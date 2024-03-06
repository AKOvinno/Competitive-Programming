#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        int max1 = 0, max1_index, max2 = 0, max2_index, min = 1000000;
        for(int i = 0; i < n; i++) {
            if(ara[i] > max1) {
                max1 = ara[i];
                max1_index = i;
            }
        }
        for(int i = 0; i < n; i++) {
            if(ara[i] > max2 && i != max1_index) {
                max2 = ara[i];
                max2_index = i;
            }
        }
        for(int i = 0; i < n; i++) {
            if(ara[i] < min) {
                min = ara[i];
            }
        }
        int total = max1 + max2;
        int avg = total / 2;
        if(min * n > max1) {
            printf("%d\n", min*n);
        }
        else if(max2*2 >= max1) {
            printf("%d\n", max2*2);
        }
        else if(max2 < avg) {
            printf("%d\n", max1);
        }
    }
    return 0;
}
