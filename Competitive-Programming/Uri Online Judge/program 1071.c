#include<stdio.h>
int main()
{
    int max, min;
    int x, y, sum = 0, i;
    scanf("%d %d", &x, &y);
    if(x > y) {
        max = x;
        min = y;
    }
    else if(y > x){
        max = y;
        min = x;
    }
    for (i = (min + 1); i < max; i++) {
        if (i % 2 ==1 || i % 2 == -1) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
