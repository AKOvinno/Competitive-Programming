#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a+b == c) {
            printf("+\n");
        }
        else if(a-b == c) {
            printf("-\n");
        }
    }
    return 0;
}
