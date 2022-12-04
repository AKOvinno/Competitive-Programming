#include<stdio.h>

int main()
{
    int n, i, even = 0, odd = 0;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(i = 0; i < n; i++) {
        if(ara[i] % 2 != 0) {
            odd++;
        }
        else {
            even++;
        }
    }
    if(odd == 1) {
        for(i = 0; i < n; i++) {
            if(ara[i] % 2 != 0) {
                printf("%d\n", i+1);
            }
        }
    }
    else {
        for(i = 0; i < n; i++) {
            if(ara[i] % 2 == 0) {
                printf("%d\n", i+1);
            }
        }
    }
    return 0;
}
