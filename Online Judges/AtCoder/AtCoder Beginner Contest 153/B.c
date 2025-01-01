#include<stdio.h>
int main()
{
    int h, n, sum = 0;
    scanf("%d %d", &h, &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        sum += ara[i];
    }
    if(sum >= h) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}
