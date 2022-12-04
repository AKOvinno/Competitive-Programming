#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    gets(s);
    int temp, i, j;
    int len = strlen(s);
    for(i = 0; i < len; i+=2) {
        for(j = i+2; j < len; j+=2) {
            if(s[i] > s[j]) {
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    puts(s);

    return 0;
}
