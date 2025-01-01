#include<stdio.h>
int main()
{
    int arr[5];
    int i, num;

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    num = 0;
    for (i = 0; i < 5; i++) {
        if (arr[i] %2 == 0) {
            num++;
        }
    }
    printf("%d valores pares\n", num);

    return 0;
}

