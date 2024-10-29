#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--) {
        int a, b;
        scanf("%d %d", &a, &b);
        if(b < -1) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}
