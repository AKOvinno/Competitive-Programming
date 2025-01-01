#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m, count = 0;
        scanf("%d %d", &n, &m);
        char str[n+1];
        scanf("%s", str);
        int fre_ara[7];
        for(int i = 0; i < 7; i++) {
            fre_ara[i] = 0;
        }
        for(int i = 0; str[i] != '\0'; i++) {
            fre_ara[str[i]-'A']++;
        }
        for(int i = 0; i < 7; i++) {
            if((m-fre_ara[i]) > 0) {
                count += (m-fre_ara[i]);
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
