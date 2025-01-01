#include<stdio.h>
int main()
{
    char s[101];
    int i, one = 0, zero = 0;
    scanf("%s", &s);
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == '0') {
            zero++;
            if(zero == 7) {
                printf("YES\n");
                return 0;
            }
            if(s[i+1] != '0') {
                zero = 0;
            }
        }
        if(s[i] == '1') {
            one++;
            if(one == 7) {
                printf("YES\n");
                return 0;
            }
            if(s[i+1] != '1') {
                one = 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
