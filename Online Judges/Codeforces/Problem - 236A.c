#include<stdio.h>

int main()
{
    int i, j, count = 0;
    char s[100];
    gets(s);
    int ara[123];
    for(i = 0; i < 123; i++) {
        ara[i] = 0;
    }
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z' ) {
            ara[s[i]]++;
        }
    }
    for(i = 97; i < 123; i++) {
        if(ara[i] > 0) {
            count++;
        }
    }
    if(count % 2 == 0) {
        printf("CHAT WITH HER!\n");
    }
    else {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
