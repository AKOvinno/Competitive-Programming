#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int dra[3], slo[3], i, dra_t = 0, slo_t = 0;
        for(i = 0; i < 3; i++) {
            scanf("%d", &dra[i]);
            dra_t += dra[i];
        }
        for(i = 0; i < 3; i++) {
            scanf("%d", &slo[i]);
            slo_t += slo[i];
        }
        if(dra_t > slo_t) {
            printf("DRAGON\n");
        }
        else if(slo_t > dra_t) {
            printf("SLOTH\n");
        }
        else if(dra_t == slo_t) {
            if(dra[0] > slo[0]) {
                printf("DRAGON\n");
            }
            else if(slo[0] > dra[0]) {
                printf("SLOTH\n");
            }
            else if(slo[0] == dra[0]) {
                if(slo[1] > dra[1]) {
                    printf("SLOTH\n");
                }
                else if(slo[1] < dra[1]) {
                    printf("DRAGON\n");
                }
                else if(slo[1] == dra[1]) {
                    if(slo[2] > dra[2]) {
                        printf("SLOTH\n");
                    }
                    else if(slo[2] < dra[2]) {
                        printf("DRAGON\n");
                    }
                    else if(slo[2] == dra[2]) {
                        printf("TIE\n");
                    }
                }
            }
        }
    }
    return 0;
}
