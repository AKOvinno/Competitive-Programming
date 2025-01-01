#include<stdio.h>
#include<string.h>
int main()
{
    char p[101];
    int flag = 1;
    scanf("%s", p);
    for(int i = 0; i < strlen(p); i++) {
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            printf("YES\n");
            flag = 0;
            break;
        }
    }
    if(flag) {
        printf("NO\n");
    }
    return 0;
}

