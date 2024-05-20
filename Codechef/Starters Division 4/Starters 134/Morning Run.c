#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if(2*(x+y) >= 1000) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
