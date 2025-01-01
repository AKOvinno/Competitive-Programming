#include<stdio.h>

int main()
{
    int N, i, a = 0;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        printf("Ho ");
        a++;
        if (a == (N-1)) {
            printf("Ho!\n");
            break;
        }
    }
    return 0;
}
