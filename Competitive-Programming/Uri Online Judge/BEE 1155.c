#include<stdio.h>

int main()
{
    int i, j;
    float S = 0.0;

    while (i = 1) {
        for(j = 1; j <= 100; j++) {
            S+=i*1.0/j*1.0;
        }
        if(j = 100) {
            break;
        }
    }
    printf("%.2f\n", S);
    return 0;
}
