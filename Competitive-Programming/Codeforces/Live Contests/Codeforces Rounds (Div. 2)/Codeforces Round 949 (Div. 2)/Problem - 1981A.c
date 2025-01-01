#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int l, r, count = 0;
        scanf("%d %d", &l, &r);
        for(int i = 2; i <= r; i*=2) {
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
