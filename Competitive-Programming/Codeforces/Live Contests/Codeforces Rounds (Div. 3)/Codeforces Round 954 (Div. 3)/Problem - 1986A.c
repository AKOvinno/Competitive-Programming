#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int x1, x2, x3;
        scanf("%d %d %d", &x1, &x2, &x3);
        int max, min, mid;
        if(x1 >= x2 && x1 >= x3) {
            max = x1;
            min = x2;
            mid = x3;
        }
        else if(x2 >= x1 && x2 >= x3) {
            max = x2;
            min = x1;
            mid = x3;
        }
        else if(x3 >= x1 && x3 >= x2) {
            max = x3;
            min = x2;
            mid = x1;
        }
        if(min > mid) {
            int temp = min;
            min = mid;
            mid = temp;
        }
        int ans = abs(x1 - mid) + abs(x2 - mid) + abs(x3 - mid);
        printf("%d\n", ans);
    }
    return 0;
}
