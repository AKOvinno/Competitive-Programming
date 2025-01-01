#include<stdio.h>
int main()
{
    int n, max = 0, t = 0;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        if(ara[i] > max) {
            max = ara[i];
        }
    }
    int fre_first[max+1];
    int fre_period[max+1];
    int fre_period_check[max+1];
    for(int i = 0; i < max+1; i++) {
        fre_first[i] = 0;
        fre_period[i] = 0;
        fre_period_check[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        if(fre_first[ara[i]] == 0) {
            fre_first[ara[i]] = i+1;
        }
    }
    for(int i = 0; i < n; i++) {
        if(fre_period[ara[i]] == 0 && (i+1) != fre_first[ara[i]]) {
            fre_period[ara[i]] = i+1;
            if(fre_period_check[ara[i]] == 0) {
                fre_period_check[ara[i]] = fre_period[ara[i]] - fre_first[ara[i]];
            }
            else if(fre_period_check[ara[i]] != 0 && fre_period_check[ara[i]] != (fre_period[ara[i]] - fre_first[ara[i]])) {
                fre_first[ara[i]] = -1;
            }
        }
    }
    for(int i = 0; i < max+1; i++) {
        if(fre_first[i] > 0) {
            t++;
        }
    }
    printf("%d\n", t);
    for(int i = 0; i < max+1; i++) {
        if(fre_first[i] > 0 && fre_period[i] != 0) {
            printf("%d %d\n", i, fre_period_check[i]);
        }
        else if(fre_first[i] > 0 && fre_period[i] == 0) {
            printf("%d %d\n", i, fre_period[i]);
        }
    }
    return 0;
}
