#include<stdio.h>
int main()
{
    float x, media = 0;
    int v = 0;
    while(v < 2) {
       scanf("%f", &x);
       if (x >= 0 && x <= 10) {
            media += x;
            v++;
       }
       else {
            printf("nota invalida\n");
       }
    }
    printf("media = %0.2f\n", media/2);
    return 0;
}
