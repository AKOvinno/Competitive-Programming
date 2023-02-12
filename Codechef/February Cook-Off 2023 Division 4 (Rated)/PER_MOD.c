#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, s = 1, i;
        scanf("%d", &n);
        int ara[n];
        for(i = n-1; i >= 0; i--) {
            ara[i] = s;
            s++;
        }
        if(n % 2 == 1) {
            int temp = ara[n/2];
            ara[n/2] = ara[0];
            ara[0] = temp;
        }
        for(i = 0; i < n; i++) {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }
    return 0;
}
