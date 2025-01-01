#include<stdio.h>
int main()
{
    int n, max = 0, max_index, flag = 0;
    scanf("%d", &n);

    if(n >= 0) {
        printf("%d\n", n);
        return 0;
    }
    else {
        n *= -1;
        int last_digit = n % 10;
        n /= 10;
        int sec_last_digit = n % 10;
        n /= 10;
        if(n != 0) printf("-%d", n);
        if(n == 0 && (last_digit > 0 && sec_last_digit > 0)) printf("-");
        if(n == 0 && (last_digit == 0 || sec_last_digit == 0)) {
            printf("0\n");
            return 0;
        }
        if(last_digit > sec_last_digit) {
            printf("%d\n", sec_last_digit);
        }
        else {
            printf("%d\n", last_digit);
        }
    }
    return 0;
}
