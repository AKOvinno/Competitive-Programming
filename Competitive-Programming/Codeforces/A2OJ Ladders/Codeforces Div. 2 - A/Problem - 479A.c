#include<stdio.h>
int main()
{
    int ara[3], count_one = 0;
    for(int i = 0; i < 3; i++) {
        scanf("%d", &ara[i]);
        if(ara[i] == 1) {
            count_one++;
        }
    }

    if(count_one == 0) {
        printf("%d\n", ara[0]*ara[1]*ara[2]);
    }
    else if(count_one == 3) {
        printf("%d\n", ara[0] + ara[1] + ara[2]);
    }
    else if(count_one == 2) {
        if(ara[0] > 1) {
            printf("%d\n", ara[0]*(ara[1]+ara[2]));
        }
        else if(ara[1] > 1) {
            printf("%d\n", ara[0]+ara[1]+ara[2]);
        }
        else if(ara[2] > 1) {
            printf("%d\n", (ara[0]+ara[1])*ara[2]);
        }
    }
    else if(count_one == 1) {
        if(ara[1] == 1) {
            if(ara[0] > ara[2]) {
                printf("%d\n", (ara[2]+ara[1])*ara[0]);
            }
            else {
                printf("%d\n", ara[2]*(ara[1]+ara[0]));
            }
        }
        else if(ara[0] == 1) {
            printf("%d\n", (ara[0]+ara[1])*ara[2]);
        }
        else if(ara[2] == 1) {
            printf("%d\n", (ara[1]+ara[2])*ara[0]);
        }
    }
    return 0;
}
