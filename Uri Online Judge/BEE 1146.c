#include<stdio.h>

int main()
{
    int i, j, num;

    while(1){
        scanf("%d", &num);

        if(num == 0) {
            break;
        }
        printf("1");
        for(j = 2; j <= num; j++) {
            printf(" %d", j);
        }
        printf("\n");
    }
    return 0;
}
