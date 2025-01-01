#include<stdio.h>

int main()
{
    int N, i, fastest;
    while(scanf("%d", &N) == 1) {
        int array[N];
        for(i = 0; i < N; i++) {
            scanf("%d", &array[i]);
        }
        fastest = array[0];
        for(i = 1; i < N; i++) {
            if(array[i] > fastest) {
                fastest = array[i];
            }
        }
        if(fastest >= 20) {
            printf("3\n");
        }
        else if(fastest >= 10 && fastest < 20) {
            printf("2\n");
        }
        else {
            printf("1\n");
        }

    }
    return 0;
}
