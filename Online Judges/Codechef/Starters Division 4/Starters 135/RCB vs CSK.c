#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int result = x - y;
    if(result >= 18) {
        printf("RCB\n");
    }
    else {
        printf("CSK\n");
    }
    return 0;
}
