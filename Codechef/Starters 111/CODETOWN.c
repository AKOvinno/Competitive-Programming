#include<stdio.h>
int check(char s)
{
    if(s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U') {
        return 1;
    }
    else {
        return 0;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char s[9];
        int flag = 1;
        scanf("%s", s);
        if(check(s[0]) == 1) {
            flag = 0;
        }
        if(check(s[1]) == 0) {
            flag = 0;
        }
        if(check(s[2]) == 1) {
            flag = 0;
        }
        if(check(s[3]) == 0) {
            flag = 0;
        }
        if(check(s[4]) == 1) {
            flag = 0;
        }
        if(check(s[5]) == 0) {
            flag = 0;
        }
        if(check(s[6]) == 1) {
            flag = 0;
        }
        if(check(s[7]) == 1) {
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
