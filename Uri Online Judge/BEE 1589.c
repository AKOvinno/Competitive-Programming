#include<stdio.h>

int main()
{
    int N, R1, R2;
    scanf("%d", &N);
    while(N) {
        scanf("%d %d", &R1, &R2);
        printf("%d\n", R1+R2);
        N--;
    }
    return 0;
}
