#include<stdio.h>

int main()
{
    int i, j, k, l, num;

    scanf("%d", &num);

    for(i = 1; i < 2; i++) {
        for(j = 1, k = 2, l = 3; j <= (num*4)-3, k <= (num*4)-2, l <= (num*4)-1 ; j+=4, k+=4, l+=4) {
            printf("%d %d %d PUM\n", j, k, l);
        }
    }
    return 0;
}
