#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[11];
        scanf("%s", s);
        int len = strlen(s);
        int alp[27], count = 0;
        for(int i = 0; i < 27; i++) {
            alp[i] = 0;
        }
        for(int i = 0; i < strlen(s); i++) {
            alp[s[i] - 96]++;
        }
        for(int i = 0; i < 27; i++) {
            if(alp[i] > 0) {
                count++;
            }
        }
        if(count == 1) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
            for(int i = 1; i < strlen(s); i++) {
                char temp = s[i];
                s[i] = s[i-1];
                s[i-1] = temp;
            }
            printf("%s\n", s);
        }
    }
    return 0;
}
