#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int x, y, k;
        scanf("%d %d %d", &x, &y, &k);
        while(k--) {
            x++;
            while(x % y == 0) {
                x /= y;
            }
        }
        printf("%d\n", x);
    }
    return 0;
}
