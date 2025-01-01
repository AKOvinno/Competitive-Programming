#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if(x >= 2*y) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}
