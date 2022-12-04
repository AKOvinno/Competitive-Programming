#include<stdio.h>

int main()
{
    int i, num, input, sum1 = 0, sum2 = 0, missing;
    scanf("%d", &num);
    for(i = 1; i < num; i++) {
        scanf("%d", &input);
        sum1+=input;
    }
    for(i = 1; i <= num; i++) {
        sum2+=i;
    }
    printf("%d\n", sum2-sum1);
    return 0;
}
