#include<stdio.h>
int main()
{
    int arr[100];
    int i, n;
    int max = 0;
    for (i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > max) {
            max = arr[i];
            n = i;
        }
    }
    printf("%d\n%d\n", max, n+1);
    return 0;
}
