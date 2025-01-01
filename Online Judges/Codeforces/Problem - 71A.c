#include<stdio.h>

int main()
{
    char word[101];
    int t, i, length = 0;
    scanf("%d", &t);
    while(t) {
        scanf("%s", word);
        for(i = 0; word[i] != '\0'; i++) {
            length++;
        }
        if(length > 10) {
            printf("%c", word[0]);
            printf("%d", length-2);
            printf("%c\n", word[length-1]);
        }
        else {
            puts(word);
        }
        length = 0;
        t--;
    }
    return 0;
}
