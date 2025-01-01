#include<stdio.h>
int max(int a, int b)
{
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main()
{
    int test;
    scanf("%d", &test);
    while(test--) {
        int n, maxx = 1000000001;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(int i = 0; i < n-1; i++) {
            int ans = max(ara[i], ara[i+1]);
            if(ans < maxx) {
                maxx = ans;
            }
        }
        printf("%d\n", maxx-1);
    }
    return 0;
}
