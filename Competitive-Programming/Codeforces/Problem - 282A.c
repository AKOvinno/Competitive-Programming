#include<stdio.h>

int main()
{
    int t, i, j, flag, output = 0;
    scanf("%d", &t);
    getchar();
    for(j = 0; j < t; j++) {
        char s[100];
        gets(s);
        for(i = 0; s[i] != '\0'; i++) {
            if(s[i] == '+') {
                flag = 1;
                break;
            }
            else if(s[i] == '-') {
                flag = 0;
                break;
            }
        }
        if(flag) {
            output++;
        }
        else {
            output--;
        }
    }
    printf("%d\n", output);
    return 0;
}
