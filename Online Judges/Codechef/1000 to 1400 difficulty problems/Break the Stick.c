#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, k;
        scanf("%d %d", &n, &k);
        if(n % 2 == 0) {
            printf("YES\n");
        }
        else {
            if(k % 2 == 1) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }
    return 0;
}
