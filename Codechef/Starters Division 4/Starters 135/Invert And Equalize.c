#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, flag_one = 0, flag_zero = 0, part_one = 0, part_zero = 0;
        scanf("%d", &n);
        char str[n+1];
        scanf("%s", str);
        for(int i = 0; i < strlen(str); i++) {
            if(str[i] == '1' && flag_one == 0) {
                part_one++;
                flag_zero = 0;
                flag_one = 1;
            }
            else if(str[i] == '0' && flag_zero == 0) {
                part_zero++;
                flag_one = 0;
                flag_zero = 1;
            }
        }
        if(part_one < part_zero) {
            printf("%d\n", part_one);
        }
        else {
            printf("%d\n", part_zero);
        }
    }
    return 0;
}
