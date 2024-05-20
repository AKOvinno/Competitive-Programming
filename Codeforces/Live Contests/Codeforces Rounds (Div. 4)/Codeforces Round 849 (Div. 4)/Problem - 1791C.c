#include<stdio.h>
int main()
{
    int t, i, j;
    scanf("%d", &t);
    while(t--) {
        int n, operation = 0;
        scanf("%d", &n);
        char s[n+1];
        getchar();
        gets(s);
        for(i = 0, j = n-1; s[i] != '\0'; i++, j--) {
            if(s[i] == '1' && s[j] == '0' || s[i] == '0' && s[j] == '1') {
                operation += 2;
            }
            else {
                break;
            }
        }
        if(n > operation) {
            printf("%d\n", n-operation);
        }
        else {
            printf("%d\n", 0);
        }
    }
    return 0;
}
