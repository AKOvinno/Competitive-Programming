#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char s1[4], s2[4];
        scanf("%s %s", s1, s2);
        char ch = s1[0];
        s1[0] = s2[0];
        s2[0] = ch;
        printf("%s %s\n", s1, s2);
    }
    return 0;
}
