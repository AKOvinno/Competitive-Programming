#include<stdio.h>
int main()
{
    int vasya[100005], petya[100005];
    for(int i = 0; i < 100005; i++) {
        vasya[i] = 0;
        petya[i] = 0;
    }
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0, j = n-1; i < n, j >= 0; i++, j--) {
        scanf("%d", &ara[i]);
        vasya[ara[i]] = i + 1;
        petya[ara[i]] = j + 1;
    }
    printf("\n");
    long long int m, vasya_total = 0, petya_total = 0;
    scanf("%d", &m);
    int query[m];
    for(int i = 0; i < m; i++) {
        scanf("%d", &query[i]);
    }
    for(int i = 0; i < m; i++) {
        vasya_total += vasya[query[i]];
        petya_total += petya[query[i]];
    }
    printf("%lld %lld\n", vasya_total, petya_total);
    return 0;
}
