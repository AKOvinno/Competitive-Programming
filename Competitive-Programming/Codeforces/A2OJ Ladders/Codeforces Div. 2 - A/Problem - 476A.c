#include<stdio.h>
int main()
{
    int n, m, two, one, total;
    scanf("%d %d", &n, &m);
    if(m > n) {
        printf("-1\n");
        return 0;
    }
    if(n % 2 == 0) {
        two = n / 2;
        total = two;
    }
    else {
        two = n / 2;
        one = n - ( 2 * (n / 2) );
        total = one + two;
    }
    for(int i = total; i <= n; i++) {
        if(i % m == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
