#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, flag = 1;
        scanf("%d", &n);
        int ara[n+1];
        for(int i = 1; i <= n; i++) {
            scanf("%d", &ara[i]);
        }
        for(int i = 1; i < n; i++) {
            if(ara[i+1] == i && ara[i] == i+1) {
                printf("2\n");
                flag = 0;
                break;
            }
        }
        if(n > 2 && flag) {
            printf("3\n");
        }
        else if(n == 2 && flag) {
            printf("2\n");
        }
    }
    return 0;
}
