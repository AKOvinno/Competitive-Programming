#include<stdio.h>
int main()
{
    float arr[6];
    int i, num;
    for (i = 0; i < 6; i++) {
        scanf("%f", &arr[i]);
    }
    num = 0;
    for (i = 0; i < 6; i++) {
        if (arr[i] > 0) {
            num++;
        }
    }
    printf("%d valores positivos\n", num);
    return 0;
}
