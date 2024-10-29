#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int c, d;
        scanf("%d %d", &c, &d);
        if( ( b > a && b < c) && (d > a && d < c) ) {
            printf("NO\n");
            continue;
        }
        if( ( a > b && a < d) && (c > b && c < d) ) {
            printf("NO\n");
            continue;
        }
        else {
            printf("YES\n");
            continue;
        }
    }
    return 0;
}
