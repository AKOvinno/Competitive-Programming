#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m, k, big_part;
        scanf("%d %d %d", &n, &m, &k);
        if(n % m == 0) {
            big_part = n / m;
        }
        else {
            big_part = (n/m) + 1;
        }
        if(n == 1) {
            printf("NO\n");
        }
        else if(m == 1) {
            printf("NO\n");
        }
        else if((n - big_part) <= k) {
            printf("NO\n");
        }
        else if((n - big_part) > k) {
            printf("YES\n");
        }
        else if(m > k) {
            printf("YES\n");
        }
    }
    return 0;
}
