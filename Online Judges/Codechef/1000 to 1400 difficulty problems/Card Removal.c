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
        int max = ara[0];
        for(int i = 1; i < n; i++) {
            if(ara[i] > max) {
                max = ara[i];
            }
        }
        int ara2[max+1];
        for(int i = 0; i <= max; i++) {
            ara2[i] = 0;
        }
        for(int i = 0; i < n; i++) {
            ara2[ara[i]]++;
        }
        int max_repeat = ara2[0];
        for(int i = 0; i <= max; i++) {
            if(ara2[i] > max_repeat) {
                max_repeat = ara2[i];
            }
        }
        printf("%d\n", n-max_repeat);
    }
    return 0;
}
