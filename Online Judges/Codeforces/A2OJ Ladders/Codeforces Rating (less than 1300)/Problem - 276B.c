#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    int odd_count = 0;
    scanf("%s", str);
    int fre[26];
    for(int i = 0; i < 26; i++) {
        fre[i] = 0;
    }
    for(int i = 0; i < strlen(str); i++) {
        fre[str[i]-97]++;
    }
    for(int i = 0; i < 26; i++) {
        if(fre[i] % 2 == 1) {
            odd_count++;
        }
    }
    if(odd_count == 0 || odd_count % 2 == 1) {
        printf("First\n");
    }
    else {
        printf("Second\n");
    }
    return 0;
}
