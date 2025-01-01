#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, flag = 1;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(int i = 0; i < n; i++) {
            if(ara[i] <= 4) {
                printf("NO\n");
                flag = 0;
                break;
            }
        }
        if(flag) {
            printf("YES\n");
        }
    }
    return 0;
}
