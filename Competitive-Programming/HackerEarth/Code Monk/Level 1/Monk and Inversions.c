#include<stdio.h>

int main()
{
    int i, j, test, count = 0, k = 0;
    scanf("%d", &test);
    int result[test];
    while(test) {
        int N;
        scanf("%d", &N);
        int array[N][N];
        for(i = 0; i < N; i++) {
            for(j = 0; j < N; j++) {
                scanf("%d", &array[i][j]);
            }
        }
        for(i = 0; i < N; i++) {
            for(j = 0; j < N; j++) {
                if(array[i][j] > array[i][j+1]) {
                    if((j+1) >=N) {
                        break;
                    }
                    count++;
                    }
                if(array[i][j] > array[i+1][j]) {
                        if((i+1) >=N) {
                        break;
                    }
                        count++;
                    }
                }
            }
            result[k] = count;
            k++;
            count = 0;
            test--;
        }
        for(i = 0; i < k; i++) {
            printf("%d\n", result[i]);
        }
        return 0;
    }
