#include<stdio.h>
int sum_of_digit(int n)
{
    int sum = 0;
    for(int i = 0; n != 0; i++) {
        sum += (n%10);
        n /= 10;
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, x, y, i, j;
        scanf("%d", &n);
        for(i = n, j = 0; i > j; i--, j++) {
            x = sum_of_digit(i);
            y = sum_of_digit(j);
            if((x-y) <= 1) {
                printf("%d %d\n", i, j);
                break;
            }
        }
    }
    return 0;
}
