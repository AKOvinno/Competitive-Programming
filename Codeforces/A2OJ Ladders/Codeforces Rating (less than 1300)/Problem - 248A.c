#include<stdio.h>
int main()
{
    int test, sec = 0, l_open = 0, l_close = 0, r_open = 0, r_close = 0;
    scanf("%d", &test);
    int n = test;
    while(test--) {
        int l, r;
        scanf("%d %d", &l, &r);
        if(l == 0) {
            l_close++;
        }
        else {
            l_open++;
        }
        if(r == 1) {
            r_open++;
        }
        else {
            r_close++;
        }
    }
    if(l_close > l_open) {
        sec += (n - l_close);
    }
    else {
        sec += (n - l_open);
    }
    if(r_close > r_open) {
        sec += (n - r_close);
    }
    else {
        sec += (n - r_open);
    }
    printf("%d\n", sec);
    return 0;
}
