#include<stdio.h>
int main()
{
    int T, N, X, Y, i, j;
    scanf("%d", &T);
    for(i = 1; i <= T; i++) {
        scanf("%d %d %d", &N, &X, &Y);
        for(j = 0; j <= N; j++) {
            if((j*X) == Y) {
                printf("YES\n");
                break;
            }
        }


    }
    return 0;
}
