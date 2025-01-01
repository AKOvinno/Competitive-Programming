#include<stdio.h>

int main()
{
    int i, num1, num2, temp;

    scanf("%d %d", &num1, &num2);

    if(num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for(i = (num1+1); i < num2; i++) {
        if(i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }
    return 0;
}
