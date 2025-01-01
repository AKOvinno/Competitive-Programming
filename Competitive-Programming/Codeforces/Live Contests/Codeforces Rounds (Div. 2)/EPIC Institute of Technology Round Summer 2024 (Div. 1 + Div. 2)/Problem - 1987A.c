#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    while(test--) {
        int n, k;
        scanf("%d %d", &n, &k);
        if(n == 1) {
            printf("1\n");
        }
        else {
            int ans = k * (n - 1) + 1;
            printf("%d\n", ans);
        }
    }
    return 0;
}
