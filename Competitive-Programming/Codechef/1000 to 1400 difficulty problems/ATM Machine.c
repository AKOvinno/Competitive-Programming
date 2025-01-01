#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int N, K, i;
        scanf("%d %d", &N, &K);
        int ara[N];
        for(i = 0; i < N; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < N; i++) {
            if(ara[i] <= K) {
                K -= ara[i];
                ara[i] = 1;
            }
            else {
                ara[i] = 0;
            }
        }
        for(i = 0; i < N; i++) {
            printf("%d", ara[i]);
        }
        printf("\n");
    }
    return 0;
}
