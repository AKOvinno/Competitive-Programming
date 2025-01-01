#include<stdio.h>
int main()
{
    int n, x, y, count, sup = 0, right, left, upper, lower;
    scanf("%d", &n);
    int ara[n][2];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &ara[i][0], &ara[i][1]);
    }
    for(int i = 0; i < n; i++) {
        x = ara[i][0];
        y = ara[i][1];
        count = 0;
        right = 0;
        left = 0;
        upper = 0;
        lower = 0;
        for(int j = 0; j < n; j++) {
            if(ara[j][0] > x && ara[j][1] == y && right == 0) {
                count++;
                right = 1;
            }
            if(ara[j][0] < x && ara[j][1] == y && left == 0) {
                count++;
                left = 1;
            }
            if(ara[j][0] == x && ara[j][1] < y && upper == 0) {
                count++;
                upper = 1;
            }
            if(ara[j][0] == x && ara[j][1] > y && lower == 0) {
                count++;
                lower = 1;
            }
            if(count == 4) {
                sup++;
                break;
            }
        }
    }
    printf("%d\n", sup);
    return 0;
}
