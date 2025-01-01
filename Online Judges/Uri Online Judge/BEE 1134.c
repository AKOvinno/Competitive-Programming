#include<stdio.h>

int main(void)
{
    int i, num, A = 0, G = 0, D = 0, End;

    do {
        scanf("%d", &i);
        if(i == 1) {
            A++;
        }
        else if(i == 2) {
            G++;
        }
        else if(i == 3) {
            D++;
        }
    } while(i != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", A);
    printf("Gasolina: %d\n", G);
    printf("Diesel: %d\n", D);

    return 0;
}
