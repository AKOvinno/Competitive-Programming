#include<stdio.h>
#include<string.h>
int main()
{
    char s[101], t[101];
    int flag = 0;
    scanf("%s", s);
    scanf("%s", t);
    int len = strlen(s);
    for(int i = 0, j = len-1; i < len; i++, j--) {
        if(s[i] != t[j]) {
            flag = 1;
            break;
        }
    }
    if(!flag) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
