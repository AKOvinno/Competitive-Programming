#include<stdio.h>
int main()
{
    int H;
    scanf("%d", &H);
    if(H == 8) {
        printf("PERFECT\n");
    }
    else if(H < 8) {
        printf("LESS\n");
    }
    else if(H > 8) {
        printf("MORE\n");
    }
    return 0;
}
