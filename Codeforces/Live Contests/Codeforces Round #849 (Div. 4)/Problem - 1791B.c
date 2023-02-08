#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--) {
        int n, a = 0, b = 0, passed = 0;
        scanf("%d", &n);
        char s[n+1];
        getchar();
        gets(s);
        for(i = 0; s[i] != '\0'; i++) {
            if(s[i] == 'U')
                b++;
            else if(s[i] == 'D')
                b--;
            else if(s[i] == 'L')
                a--;
            else if(s[i] == 'R')
                a++;
            if(a == 1 && b == 1) {
                printf("YES\n");
                passed = 1;
                break;
            }
        }
        if(!passed)
            printf("NO\n");
    }
    return 0;
}
