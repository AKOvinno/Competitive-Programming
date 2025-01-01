#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a < b && b < c) {
            printf("STAIR\n");
        }
        else if(b > a && b > c) {
            printf("PEAK\n");
        }
        else {
            printf("NONE\n");
        }
    }
    return 0;
}
