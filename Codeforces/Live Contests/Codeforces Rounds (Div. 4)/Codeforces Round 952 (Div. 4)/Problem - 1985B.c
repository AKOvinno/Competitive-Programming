#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, sum = 0, count = 0, increment, ans;
        scanf("%d", &n);
        for(int i = 2; i <= n; i++) {
            count = 0;
            increment = i;
            for(int j = i; j <= n; j+=increment) {
                count += j;
            }
            if(count > sum) {
                sum = count;
                ans = i;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
