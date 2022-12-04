#include<stdio.h>
int main()
{
    int num, N, i, j, sum = 0;

    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        scanf("%d", &num);
        for(j = 1; j < num; j++) {
            if(num % j == 0) {
                sum+=j;
            }
        }
        if (sum == num) {
        printf("%d eh perfeito\n", num);
            }
        else {
            printf("%d nao eh perfeito\n", num);
        }
            sum = 0;
    }
    return 0;
}
