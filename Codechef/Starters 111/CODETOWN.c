#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[9];
        int flag = 1;
        scanf("%s", s);
        s[8] = '\0';
        if(s[0] == 'A' && s[0] == 'E' && s[0] == 'I' && s[0] == 'O' && s[0] == 'U') {
            flag = 0;
        }
        if(s[1] != 'A' && s[1] != 'E' && s[1] != 'I' && s[1] != 'O' && s[1] != 'U') {
            flag = 0;
        }
        if(s[2] == 'A' && s[2] == 'E' && s[2] == 'I' && s[2] == 'O' && s[2] == 'U') {
            flag = 0;
        }
        if(s[3] != 'A' && s[3] != 'E' && s[3] != 'I' && s[3] != 'O' && s[3] != 'U') {
            flag = 0;
        }
        if(s[4] != 'T' && s[5] != 'O' && s[6] != 'W' && s[7] != 'N') {
            flag = 0;
        }
        if(!flag) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}
