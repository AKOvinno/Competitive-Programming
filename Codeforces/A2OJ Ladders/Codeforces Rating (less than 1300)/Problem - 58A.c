#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int count = 0;
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] == 'h' && count == 0) {
            count++;
        }
        else if(s[i] == 'e' && count == 1) {
            count++;
        }
        else if(s[i] == 'l'  && count == 2) {
            count++;
        }
        else if(s[i] == 'l' && count == 3) {
            count++;
        }
        else if(s[i] == 'o' && count == 4) {
            count++;
        }
    }
    if(count == 5) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
