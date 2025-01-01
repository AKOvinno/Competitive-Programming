#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        if((a * 2) <= b) {
            printf("%d\n", n * a);
        }
        else {
            if(n % 2 == 0) {
                printf("%d\n", (n/2)*b);
            }
            else {
                printf("%d\n", ((n-1)/2)*b + a);
            }
        }
    }
    return 0;
}
