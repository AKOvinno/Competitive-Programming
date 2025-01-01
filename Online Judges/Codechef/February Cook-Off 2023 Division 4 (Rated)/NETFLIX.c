#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, c, n;
        scanf("%d %d %d %d", &a, &b, &c, &n);
        if((a+b) >= n || (b+c) >= n || (a+c) >= n) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
