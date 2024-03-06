#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, sum = 0;
        scanf("%d", &n);
        while(n != 0) {
            if(n % 2 == 0) {
                sum += 0;
                n /= 2;
            }
            if(n % 2 != 0) {
                sum += 1;
                n -= 1;
                n /= 2;
            }
        }
        if(sum % 2 == 0) {
            printf("EVEN\n");
        }
        else {
            printf("ODD\n");
        }
    }
    return 0;
}
