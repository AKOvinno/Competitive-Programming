#include<stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);
    int arr[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < N; i++) {
       if (arr[i] > 0) {
            if (arr[i] % 2 == 0) {
                printf("EVEN POSITIVE\n");
            }
            else if (arr[i] % 2 != 0 ) {
                printf("ODD POSITIVE\n");
            }
        }
         else if (arr[i] < 0) {
            if (arr[i] % 2 == 0) {
                printf("EVEN NEGATIVE\n");
            }
            else if (arr[i] % 2 != 0) {
                printf("ODD NEGATIVE\n");
            }
        }
        else if (arr[i] == 0) {
            printf("NULL\n");
        }
    }
    return 0;
}
