#include<stdio.h>

int main()
{
    int i, N, a, b, c, sum1 = 0, sum2 = 0, sum3 = 0;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d %d %d", &a, &b, &c);
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
