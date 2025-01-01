#include<stdio.h>

int main()
{
    int i;
    float array[100];

     for(i = 0; i < 100; i++) {
        scanf("%f", &array[i]);
     }
     for(i = 0; i < 100; i++) {
        if(array[i] <= 10) {
            printf("A[%d] = %.1f\n", i, array[i]);
        }
     }
     return 0;
}
