#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int diff1 = abs(x1 - x2);
    int diff2 = abs(y1 - y2);
    if(diff1 != diff2 && x1 != x2 && y1 != y2) {
        printf("-1\n");
        return 0;
    }
    if(x1 != x2 && y1 != y2) {
        printf("%d %d %d %d\n", x2, y1, x1, y2);
    }
    else if(x1 == x2 && y1 != y2) {
        if(y1 > y2) {
            x3 = y1 - y2;
            x4 = x3;
        }
        else {
            x3 = y2 - y1;
            x4 = x3;
        }
        printf("%d %d %d %d\n", x3, y1, x4, y2);
    }
    else if(x1 != x2 && y1 == y2) {
        y3 = y1 + x1;
        y4 = y3;
        printf("%d %d %d %d\n", x1, y3, x2, y4);
    }
    return 0;
}
