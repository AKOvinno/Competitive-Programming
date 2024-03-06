#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, flag = 1;
        scanf("%d", &n);
        char str[n];
        scanf("%s", str);
        int ara[27];
        for(int i = 0; i < 27; i++) {
            ara[i] = 0;
        }
        for(int i = 0; i < n; i++) {
            ara[str[i]-96]++;
        }
        if(n % 2 == 0) {
            for(int i = 1; i < 27; i++) {
                if(ara[i] % 2 == 1) {
                    printf("NO\n");
                    flag = 0;
                    break;
                }
            }
        }
        else {
            printf("NO\n");
            flag = 0;
        }
        if(flag) {
            printf("YES\n");
        }
    }
    return 0;
}
