#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int h_flag = 0, e_flag = 0, l1_flag = 0, l2_flag = 0, o_flag = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == 'h' && h_flag == 0) {
            if(i == 0) {
                h_flag = -1;
            }
        }
        else if(s[i] == 'e' && e_flag == 0) {
            e_flag = i;
        }
        else if(s[i] == 'l' && l1_flag == 0) {
            l1_flag = i;
        }
        else if(s[i] == 'l' && l2_flag == 0 && l1_flag != 0) {
            l2_flag = i;
        }
        else if(s[i] == 'o' && o_flag == 0) {
            o_flag = i;
        }
    }
    printf("%d %d %d %d %d\n", h_flag, e_flag, l1_flag, l2_flag, o_flag);
    if(h_flag < e_flag && e_flag < l1_flag && l1_flag < l2_flag && l2_flag < o_flag) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
