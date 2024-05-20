#include<stdio.h>
#include<string.h>
int main()
{
    int k, flag, even_flag = 0, odd_flag = 0, value;
    scanf("%d", &k);
    char str[1001];
    scanf("%s", str);
    if(k == 1) {
        printf("%s\n", str);
        return 0;
    }
    int alp[27];
    for(int i = 0; i < 27; i++) {
        alp[i] = 0;
    }
    for(int i = 0; i < strlen(str); i++) {
        alp[str[i] - 97]++;
    }
    for(int i = 0; i < 27; i++) {
        if(alp[i] > 0 && alp[i] % k != 0) {
            printf("-1\n");
            return 0;
        }
    }
    for(int j = k; j > 0; j--) {
        for(int i = 0; i < 27; i++) {
            if(alp[i] > 0) {
                int num = alp[i] / j;
                while(num != 0) {
                    printf("%c", i+97);
                    num--;
                }
                alp[i] -= (alp[i] / j);
            }
        }
    }
    printf("\n");
    return 0;
}
