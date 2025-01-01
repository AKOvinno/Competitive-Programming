#include<stdio.h>
int main()
{
    long long int n, m, time = 0, pos = 1;
    scanf("%lld %lld", &n, &m);
    int ara[m];
    for(int i = 0; i < m; i++) {
        scanf("%d", &ara[i]);
    }
    for(int i = 0; i < m; i++) {
        if(ara[i] > pos) {
            time += (ara[i] - pos);
            pos = ara[i];
        }
        else if(ara[i] < pos) {
            time += ((n - pos) + ara[i]);
            pos = ara[i];
        }
        else {
            continue;
        }
    }
    printf("%lld\n", time);
    return 0;
}
