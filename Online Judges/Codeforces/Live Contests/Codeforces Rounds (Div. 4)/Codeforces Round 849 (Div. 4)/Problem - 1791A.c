#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--) {
        getchar();
        char ch;
        int found = 0;
        scanf("%c", &ch);
        char s[] = "codeforces";
        for(i = 0; s[i] != '\0'; i++) {
            if(ch == s[i]) {
                printf("YES\n");
                found = 1;
                break;
            }
        }
        if(!found)
            printf("NO\n");
    }
    return 0;
}
