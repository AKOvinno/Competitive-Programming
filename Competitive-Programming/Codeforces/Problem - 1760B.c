#include<stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    getchar();
    while (t) {
        int n;
        scanf("%d", &n);
        char s[100];
        getchar();
        gets(s);
        int num = s[0];
        for(i = 0; s[i] != '\0'; i++) {
            int value = s[i];
            if(value > num) {
                num = value;
            }
        }
        printf("%d\n", num-96);
        t--;
    }
    return 0;
}
