#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, a = 1, b = 0, i;
        scanf("%d", &n);
        char s[n+1];
        getchar();
        gets(s);
        char ch = s[0];
        for(i = 1; s[i] != '\0'; i++) {
            if(ch == s[i]) {
                break;
            }
            a++;
        }
        for(i = a+1; s[i] != '\0'; i++) {
            if(s[i] == s[i+1])
                continue;
            b++;
        }
        printf("%d\n", a+b);
    }
    return 0;
}
