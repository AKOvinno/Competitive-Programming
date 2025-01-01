#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        char s[n+1], r[n+1], ans[n+1];
        scanf("%s", s);
        int alp[26];
        for(int i = 0; i < 26; i++) {
            alp[i] = 0;
        }
        for(int i = 0; i < strlen(s); i++) {
            alp[s[i]-97] = 1;
        }
        int j = 0;
        for(int i = 0; i < 26; i++) {
            if(alp[i] == 1) {
                r[j] = i+97;
                j++;
            }
        }
        r[j] = '\0';
        int k = 0;
        for(int i = 0; i < strlen(s); i++) {
            for(int j = 0; j < strlen(r); j++) {
                if(s[i] == r[j]) {
                    ans[k] = r[strlen(r) - 1 - j];
                    k++;
                }
            }
        }
        ans[k] = '\0';
        printf("%s\n", ans);
    }
    return 0;
}
