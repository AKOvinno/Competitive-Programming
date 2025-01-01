#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int differ1 = 0, differ2 = 0;
        char str1[101], str2[101];
        scanf("%s", str1);
        scanf("%s", str2);
        for(int i = 0; i < strlen(str1); i++) {
            if(str1[i] != str2[i] && str1[i] != '?' && str2[i] != '?') {
                differ1++;
            }
            if(str1[i] != str2[i]) {
                differ2++;
            }
            else if(str1[i] == '?' && str2[i] == '?') {
                differ2++;
            }
        }
        printf("%d %d\n", differ1, differ2);
    }
    return 0;
}
