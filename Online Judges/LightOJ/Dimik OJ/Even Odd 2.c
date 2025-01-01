#include<stdio.h>

int main()
{
    long long int T, num;
    scanf("%lld", &T);
    for(int i = 0; i < T; i++) {
        scanf("%lld", &num);
        if(num % 2 == 0) {
            printf("even\n");
        }
        else {
            printf("odd\n");
        }
    }
    return 0;
}
