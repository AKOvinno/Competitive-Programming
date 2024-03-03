#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, count, flag = 1;
        scanf("%d", &n);
        int ara[2*n];
        for(int i = 0; i < 2 * n; i++) {
            scanf("%d", &ara[i]);
        }
        for(int i = 0; i < 2 * n; i++) {
            count = 1;
            for(int j = 0; j < 2 * n && j != i; j++) {
                if(ara[i] == ara[j]) {
                    count++;
                }
            }
             if(count > 2) {
                    flag = 0;
                    break;
                }
        }
        if(flag) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
