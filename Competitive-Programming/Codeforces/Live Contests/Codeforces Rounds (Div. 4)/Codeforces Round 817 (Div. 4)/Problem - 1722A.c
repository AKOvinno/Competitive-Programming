#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char str[11];
        int len, flag_T = 0, flag_i = 0, flag_m = 0, flag_u = 0, flag_r = 0;
        scanf("%d", &len);
        scanf("%s", &str);
        if(len != 5) {
            printf("NO\n");
        }
        else {
            for(int i = 0; i < 5; i++) {
                if(str[i] == 'T') {
                    flag_T = 1;
                }
                else if(str[i] == 'i') {
                    flag_i = 1;
                }
                else if(str[i] == 'm') {
                    flag_m = 1;
                }
                else if(str[i] == 'u') {
                    flag_u = 1;
                }
                else if(str[i] == 'r') {
                    flag_r = 1;
                }
            }
            if(flag_T && flag_i && flag_m && flag_u && flag_r) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
