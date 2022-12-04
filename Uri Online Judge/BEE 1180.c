#include<stdio.h>

int main()
{
    int i, N, is_smallest = 0;
    scanf("%d", &N);
    int X[N];

    for(i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }
    is_smallest = X[0];
    for(i = 0; i < N; i++) {
        if(X[i] < is_smallest) {
            is_smallest = X[i];
        }
    }

    for(i = 0; i < N; i++) {
        if(X[i] == is_smallest) {
            printf("Menor valor: %d\n", is_smallest);
            printf("Posicao: %d\n", i);
        }
    }
    return 0;
}
