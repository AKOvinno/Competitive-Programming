#include<stdio.h>
int main()
{
    int n, a, b, count = 0;
    scanf("%d %d %d", &n, &a, &b);
    if((n - a) > b) {
        printf("%d\n", b+1);
    }
    else if((n - a) == b) {
        printf("%d\n", b);
    }
    else if((n - a) < b) {
        printf("%d\n", n-a);
    }
    return 0;
}
