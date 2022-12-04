#include<stdio.h>

int main()
{
    int i, j, N, target, sum = 0;
    scanf("%d", &N);
    int ara[N];
    printf("nums = ");
    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }
    printf("target = ");
    scanf("%d", &target);
    for(i = 0; i < (N-1); i++) {
        sum = ara[i];
        for(j = (i+1); j < N; j++) {
            sum+=ara[j];
            if(sum == target) {
                printf("Output: [%d,%d]\n", i, j);
                break;
            }
            sum = ara[i];
        }
    }
    return 0;

}
