#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--) {
        int n, flag = 0;
        scanf("%d", &n);
        char string[n];
        scanf("%s", &string);
        char alphabet[26];
        for(i = 0; i < 26; i++) {
            alphabet[i] = 0;
        }
        for(i = 0; string[i] != '\0'; i++) {
            alphabet[string[i] - 97]++;
        }
        for(i = 0; i < 26; i++) {
            if(alphabet[i] > 1) {
                flag = 1;
            }
        }
        if(flag) {
            printf("%d\n", n-2);
        }
        else {
            printf("%d\n", -1);
        }
    }
    return 0;
}
