#include<stdio.h>
int max(int x, int y)
{
    if(x > y) {
        return x;
    }
    else {
        return y;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, m, a, b, c, d;
        scanf("%d %d", &n, &m);
        int ara[102][102];
        for(int i = 0; i < 102; i++) {
            for(int j = 0; j < 102; j++) {
                ara[i][j] = 0;
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                scanf("%d", &ara[i][j]);
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                if(ara[i][j] > ara[i-1][j] && ara[i][j] > ara[i+1][j] && ara[i][j] > ara[i][j+1] && ara[i][j] > ara[i][j-1]) {
                    a = ara[i-1][j];
                    b = ara[i+1][j];
                    c = ara[i][j+1];
                    d = ara[i][j-1];
                    int left_max = max(a, b);
                    int right_max = max(c, d);
                    int final_max = max(left_max, right_max);
                    ara[i][j] = final_max;
                }
            }
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                printf("%d ", ara[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
