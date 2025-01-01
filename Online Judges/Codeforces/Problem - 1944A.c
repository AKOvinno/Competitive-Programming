#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, k, total_bridge;
        scanf("%d %d", &n, &k);
        total_bridge = (n * (n - 1)) / 2;
        if(k == 0 || k < (n - 1)) {
            printf("%d\n", n);
        }
        else if(k == total_bridge || k >= n || k == n - 1) {
            printf("%d\n", 1);
        }
    }
    return 0;
}
