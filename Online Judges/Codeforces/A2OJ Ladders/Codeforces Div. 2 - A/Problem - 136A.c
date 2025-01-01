#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int ara2[n];
    for(int i = 0; i < n; i++) {
        ara2[ara[i]-1] = i+1;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", ara2[i]);
    }
    return 0;
}
