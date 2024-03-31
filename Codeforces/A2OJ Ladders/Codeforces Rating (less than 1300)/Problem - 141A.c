#include<stdio.h>
#include<string.h>
int main()
{
    char ara1[101], ara2[101], ara3[101];
    scanf("%s", ara1);
    scanf("%s", ara2);
    scanf("%s", ara3);
    int num1[26], num2[26], flag = 1;
    for(int i = 0; i < 26; i++) {
        num1[i] = 0;
        num2[i] = 0;
    }
    for(int i = 0; i < strlen(ara1); i++) {
        num1[ara1[i] - 65]++;
    }
    for(int i = 0; i < strlen(ara2); i++) {
        num1[ara2[i] - 65]++;
    }
    for(int i = 0; i < strlen(ara3); i++) {
        num2[ara3[i] - 65]++;
    }
    for(int i = 0; i < 26; i++) {
        if(num1[i] != num2[i]) {
            flag = 0;
            break;
        }
    }
    if(flag) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
