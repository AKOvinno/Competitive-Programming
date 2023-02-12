#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, i, flag = 0;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        if(n == 1) {
            printf("Marichka\n");
            break;
        }
        for(i = 1; i < n; i++) {
            if(ara[0] != ara[i]) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            printf("Marichka\n");
        }
        else {
            printf("Zenyk\n");
        }
    }
    return 0;
}
