#include<stdio.h>
int main()
{
    int n, flag = 0;
    scanf("%d", &n);
    int ara[n+1];
    for(int i = 0; i <= n; i++) {
        ara[i] = 0;
    }
    int p;
    scanf("%d", &p);
    int x[p];
    for(int i = 0; i < p; i++) {
        scanf("%d", &x[i]);
        ara[x[i]] = 1;
    }
    int q;
    scanf("%d", &q);
    int y[q];
    for(int i = 0; i < q; i++) {
        scanf("%d", &y[i]);
        ara[y[i]] = 1;
    }
    for(int i = 1; i <= n; i++) {
        if(ara[i] == 0) {
            flag = 1;
        }
    }
    if(flag) {
        printf("Oh, my keyboard!\n");
    }
    else {
        printf("I become the guy.\n");
    }
    return 0;
}
