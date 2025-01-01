#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char str[4];
        scanf("%s", str);
        if(str[0] == 'a' && str[1] == 'b' && str[2] == 'c') {
            printf("YES\n");
        }
        else if(str[0] == 'c' && str[1] == 'b' && str[2] == 'a') {
            printf("YES\n");
        }
        else if(str[0] == 'b' && str[1] == 'a' && str[2] == 'c') {
            printf("YES\n");
        }
        else if(str[0] == 'a' && str[1] == 'c' && str[2] == 'b') {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
