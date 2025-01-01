#include<stdio.h>
int main()
{
    int h, a, count = 0;
    scanf("%d %d", &h, &a);
    while(h > 0) {
        count++;
        h -= a;
    }
    printf("%d\n", count);
    return 0;
}
