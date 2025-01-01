#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int x, y;
        scanf("%d %d", &x, &y);
        if(x >= 2 && y > x) {
            printf("%d\n", y-(x-2));
        }
        else if(x == y) {
            printf("1\n");
            break;
        }
        else if(x == (y+1) || x == (y-1)) {
            printf("1\n");
        }
        else if(x > (y+1)) {
            printf("0\n");
        }
    }
}
