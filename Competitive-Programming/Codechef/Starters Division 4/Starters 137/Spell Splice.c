#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, total = 0;
        scanf("%d", &n);
        int ara_v[n], ara_a[n];
        for(int i = 0; i < n; i++) {
            scanf("%d %d", &ara_v[i], &ara_a[i]);
        }
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(total < (ara_v[i] * ara_a[j] + ara_a[i] * ara_v[j])) {
                    total = ara_v[i] * ara_a[j] + ara_a[i] * ara_v[j];
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
