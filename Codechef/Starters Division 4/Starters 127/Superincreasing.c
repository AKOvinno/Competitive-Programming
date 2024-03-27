#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int N, K, X;
        scanf("%d %d %d", &N, &K, &X);
        if(X <= K || K == N) {
            printf("No\n");
        }
        else {
            printf("Yes\n");
        }
    }
    return 0;
}
