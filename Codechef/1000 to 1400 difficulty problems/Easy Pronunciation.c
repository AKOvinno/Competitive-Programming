#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int i, n, consonent = 0, flag = 1;
        scanf("%d", &n);
        char str[n+1];
        scanf("%s", str);
        str[n] = '\0';
        for(i = 0; i < n; i++) {
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                consonent = 0;
            }
            else {
                consonent++;
            }
            if(consonent == 4) {
                flag = 0;
                printf("NO\n");
                break;
            }
        }
        if(flag) {
            printf("YES\n");
        }
    }
    return 0;
}
