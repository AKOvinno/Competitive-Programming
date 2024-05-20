#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, count = 0;
        scanf("%d", &n);
        int ara[n];
        int max = 0;
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
            if(ara[i] > max) {
                max = ara[i];
            }
        }
        int fre[max+1];
        for(int i = 0; i < max+1; i++) {
            fre[i] = 0;
        }
        for(int i = 0; i < n; i++) {
            fre[ara[i]]++;
        }
        for(int i = 0; i < max+1; i++) {
            if(fre[i] < 3) {
                continue;
            }
            else if(fre[i] >= 3) {
                count += (fre[i] / 3);
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
