#include<stdio.h>

int main()
{
    int num, i;

    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    return 0;
}
