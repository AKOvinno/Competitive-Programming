#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, sum = 0, frac, i;
        scanf("%d", &n);
        for(i = 1; i <= n; i++) {
            frac = i;
            while(frac != 0) {
                sum += (frac % 10);
                frac = frac / 10;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
