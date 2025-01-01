#include<stdio.h>

int main()
{
    int i, j, temp, A[20];

    for(i = 0; i < 20; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0, j = 19; i < j; i++, j--) {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    for(i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, A[i]);
    }
    return 0;
}
