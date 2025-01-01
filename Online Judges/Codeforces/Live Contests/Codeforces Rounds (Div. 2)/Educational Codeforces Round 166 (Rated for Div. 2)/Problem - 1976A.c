#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, flag = 0;
        scanf("%d", &n);
        char str[n+1];
        scanf("%s", str);
        for(int i = 0; str[i] != '\0'; i++) {
            if(str[i] >= 'a' && str[i] <= 'z' && str[i+1] >= '0' && str[i+1] <= '9') {
                flag = 1;
            }
            if((str[i] >= 'a' && str[i] <= 'z') && (str[i+1] >= 'a' && str[i+1] <= 'z')) {
                if(str[i] > str[i+1]) {
                    flag = 1;
                }
            }
            if((str[i] >= '0' && str[i] <= '9') && (str[i+1] >= '0' && str[i+1] <= '9')) {
                if(str[i] > str[i+1]) {
                    flag = 1;
                }
            }
        }
        if(flag) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}
