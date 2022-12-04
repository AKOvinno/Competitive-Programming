#include<stdio.h>

int main()
{
    int i, num1, num2, temp, sum = 0;

    scanf("%d %d", &num1, &num2);

    if(num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for(i = num1; i <= num2; i++) {
        if(i % 13 != 0) {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
