#include<stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);
    double a, b, c, average;
    for (i = 0; i < N; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        average = (((a * 2) + (b * 3) + (c * 5)) / 10);
        printf("%0.1lf\n", average);
    }
    return 0;
}
