#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int N, M;
        scanf("%d %d", &N, &M);
        int total_match = N - 1;
        if(M <= total_match) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
