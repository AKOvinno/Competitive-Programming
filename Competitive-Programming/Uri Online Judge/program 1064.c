#include<stdio.h>
int main()
{
    float arr[6];
    int i, num;
    float sum;
    for (i = 0; i < 6; i++) {
        scanf("%f", &arr[i]);
    }
    num = 0;
    sum = 0;
    for (i = 0; i < 6; i++) {
        if (arr[i] > 0) {
            num++;
            sum += arr[i];
        }
    }
    printf("%d valores positivos\n", num);
    printf("%0.1f\n", sum/num);

    return 0;
}
