#include<stdio.h>
int main()
{
    int i, j, k, T, PA, PB, year = 0;
    float G1, G2;
    scanf("%d", &T);

    for(i = 1; i <= T; i++) {
        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
        while(1) {
            year++;
            PA+= (PA*(G1/100.0));
            PB+= (PB*(G2/100.0));
            if(year > 100) {
                printf("Mais de 1 seculo.\n");
                year = 0;
                break;
            }
             if(PA > PB) {
                printf("%d anos.\n", year);
                year = 0;
                break;
            }

        }
    }

    return 0;
}
