#include<stdio.h>
#include<math.h>
int main()
{
    long long int num, i, j;
    scanf("%lld", &num);
    int ara[num];

    j = 0;
    for(i = 2; i <= num; i+=2) {
        ara[j] = i;
        j++;
    }

    for(i = 1; i <= num; i+=2) {
        ara[j] = i;
        j++;
    }
    for(i = 0; i < num-1; i++) {
        if(abs(ara[i] - ara[i+1]) == 1) {
            printf("NO SOLUTION\n");
            return 0;
        }
    }
    for(i = 0; i < num; i++) {
        printf("%lld ", ara[i]);
    }
    return 0;
}
