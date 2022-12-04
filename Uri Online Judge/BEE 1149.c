#include<stdio.h>

int main()
{
    int A, N, i, sum = 0;

    scanf("%d", &A);
    do {
        scanf("%d", &N);
    } while (N == 0 || N < 0);

    for(i = A; N; i++) {
        sum+=i;
        N--;
    }
    printf("%d\n", sum);



    return 0;
}
