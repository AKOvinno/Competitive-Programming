// Problem solved by Ashfaq Kadir Ovinno
#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--) {
        int n, flag = 0;
        scanf("%d", &n);
        int ara[n];
        int a;
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
            a = ara[0];
            if(a != ara[i]) {
                flag = 1;
            }
        }
        if(!flag) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
            if(ara[0] == ara[1]) {
                printf("R");
                for(int i = 1; i < n; i++) {
                    printf("B");
                }
                printf("\n");
            }
            else {
                for(int i = 0; i < n; i++) {
                    if(i == 1) {
                        printf("R");
                    }
                    else {
                        printf("B");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
