#include<stdio.h>
int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    int num = n;
    while(n > 0) {
        if((n % 10) != 1 && (n % 10) != 4) {
            printf("NO\n");
            return 0;
        }
        n /= 10;
    }
    while(num > 0) {
        if((num % 10) == 4) {
            num /= 10;
            if((num % 10) == 1) {
                num /= 10;
            }
            else if((num % 10) == 4) {
                num /= 10;
                if((num % 10) == 1) {
                    num /= 10;
                }
                else {
                    printf("NO\n");
                    return 0;
                }
            }
            else {
                printf("NO\n");
                return 0;
            }
        }
        else if((num % 10) == 1) {
            num /= 10;
        }
        else {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
