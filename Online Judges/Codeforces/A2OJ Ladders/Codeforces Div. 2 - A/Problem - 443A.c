#include<stdio.h>
int main()
{
    char str[1001];
    gets(str);
    int fre[26], count = 0;
    for(int i = 0; i < 26; i++) {
        fre[i] = 0;
    }
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            fre[str[i] - 'a'] = 1;
        }
    }
    for(int i = 0; i < 26; i++) {
        if(fre[i] > 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
