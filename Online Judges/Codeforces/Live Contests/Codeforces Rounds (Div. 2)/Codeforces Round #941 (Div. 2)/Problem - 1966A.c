#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k, flag = 0;
        scanf("%d %d", &n, &k);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        int fre[101];
        for(int i = 0; i < 101; i++) {
            fre[i] = 0;
        }
        for(int i = 0; i < n; i++) {
            fre[ara[i]]++;
        }
        for(int i = 0; i < 101; i++) {
            if(fre[i] >= k) {
                flag = 1;
            }
        }
        if(!flag) {
            printf("%d\n", n);
        }
        else {
            printf("%d\n", k-1);
        }
    }
    return 0;
}
