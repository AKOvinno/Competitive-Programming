#include<stdio.h>
#include<stdlib.h>
int minn(int a, int b)
{
    if(a < b) {
        return a;
    }
    else {
        return b;
    }
}
int maxx(int a, int b)
{
    if(a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, flag = 0, count = 0;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        int ara2[n+1];
        for(int i = 0; i < n+1; i++) {
            scanf("%d", &ara2[i]);
        }
        for(int i = 0; i < n; i++) {
            int min = minn(ara[i], ara2[i]);
            int max = maxx(ara[i], ara2[i]);
            if(ara2[n] >= min && ara2[n] <= max) {
                flag = 1;
            }
            count += (max-min);
        }
        int op = abs(ara2[n] - ara[0]);
        for(int i = 1; i < n; i++) {
            int num = abs(ara[i] - ara2[n]);
            if(num < op) {
                op = num;
            }
            num = abs(ara2[i] - ara2[n]);
            if(num < op) {
                op = num;
            }
        }
        if(flag) {
            count++;
        }
        else {
            count += (op+1);
        }
        printf("%d\n", count);
    }
    return 0;
}
