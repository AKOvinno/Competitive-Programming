#include<stdio.h>
#include<math.h>
int main()
{
    int n, m, count = 0;
    scanf("%d %d", &n, &m);

    int sqrt_n = (int) (1.0*sqrt(n));
    int sqrt_m = (int) (1.0*sqrt(m));

    for(int i = 0; i <= sqrt_n; i++) {
        for(int j = 0; j <= sqrt_m; j++) {
            if((i*i + j == n) && (i + j*j == m)) {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
