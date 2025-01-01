#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k, count = 0;
        scanf("%d %d", &n, &k);
        for(int i = 1; i <= k; i++) {
            if(i % n == 0) {
                k++;
            }
        }
        printf("%d\n", k);
    }
    return 0;
}
