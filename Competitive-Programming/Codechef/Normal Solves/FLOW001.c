#include<stdio.h>
int main()
{
    int num1, num2, n, i;
    scanf("%d", &n);

    for (i = 1; i <=n; i++) {
        scanf("%d %d", &num1, &num2);
        printf("%d", num1 + num2);
    }
    return 0;
}
