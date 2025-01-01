#include<stdio.h>

int main()
{
    int N, i, j, count = 0, people = 0;
    scanf("%d", &N);
    int ara[N][3];
    for(i = 0; i < N; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &ara[i][j]);
        }
    }
    for(i = 0; i < N; i++) {
        for(j = 0; j < 3; j++) {
            if(ara[i][j] == 1) {
                people++;
            }
        }
        if(people > 1) {
            count++;
        }
        people = 0;
    }
    printf("%d\n", count);
    return 0;
}
