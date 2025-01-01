#include<stdio.h>

int main()
{
    int i, X, Z, sum = 0, count = 0;

    scanf("%d", &X);
    do{
        scanf("%d", &Z);
    } while (Z < X || Z == X);

    for(i = X; ; i++) {
        sum+=i;
        count++;
        if(sum > Z) {
            break;
        }
    }
    printf("%d\n", count);
    return 0;
}
