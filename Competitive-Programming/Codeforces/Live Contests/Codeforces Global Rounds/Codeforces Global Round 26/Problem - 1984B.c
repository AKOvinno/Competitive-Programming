#include<stdio.h>
int isDigitCount(int n)
{
    int count = 0;
    while(n != 0) {
        n /= 10;
        count++;
    }
    return count;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int num;
        scanf("%d", &num);
        int digits = isDigitCount(num);
        printf("Digits = %d\n", digits);
    }
    return 0;
}
