#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, sum = 0;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(int i = 0; i < n-1; i++) {
            sum += (ara[i] + ara[i+1]);
        }
        printf("%d\n", sum);
        sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n-1; j++) {
                if(ara[j] > ara[j+1]) {
                    int temp = ara[j];
                    ara[j] = ara[j+1];
                    ara[j+1] = temp;
                }
            }
        }
        for(int i = 0; i < n - 1; i++) {
            sum += (ara[i] + ara[i+1]);
        }
        printf("%d\n", sum);
    }
    return 0;
}
