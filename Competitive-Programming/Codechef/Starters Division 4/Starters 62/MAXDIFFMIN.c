#include<stdio.h>

int main()
{
    int N, i, a, b, c, maximum, minimum;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
            scanf("%d %d %d", &a, &b, &c);
             if(a > b && a > c) {
                maximum = a;
            }
            else if(b > a && b > c) {
                maximum = b;
            }
            else {
                maximum = c;
            }
            if(a < b && a < c) {
                minimum =  a;
            }
            else if(b < a && b < c) {
                minimum = b;
            }
            else {
                minimum = c;
            }

            printf("%d\n", maximum-minimum);
    }
    return 0;
}
