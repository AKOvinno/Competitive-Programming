#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        for(int i = 1; i <= y; i++) {
            if(x*2 > x+1000) {
                x *= 2;
            }
            else {
                x += 1000;
            }
        }
        printf("%d\n", x);
    }
}
