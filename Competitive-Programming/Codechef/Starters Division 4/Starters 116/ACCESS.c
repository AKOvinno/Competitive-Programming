#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, x, flag = 0;
        scanf("%d %d", &n, &x);
        char s[n];
        getchar();
        for(int i = 0; i < n; i++) {
            scanf("%c", &s[i]);
        }
        int rem = 0;
        for(int i = 0; i < n; i++) {
            if(s[0] == '0') {
                printf("NO\n");
                flag = 1;
                break;
            }
            if(s[i] == '0') {
                rem--;
            }
            else if(s[i] == '1') {
                rem = x;
            }
            if(rem < 0) {
                printf("NO\n");
                flag = 1;
                break;
            }
        }
        if(!flag) {
            printf("YES\n");
        }
    }
    return 0;
}
