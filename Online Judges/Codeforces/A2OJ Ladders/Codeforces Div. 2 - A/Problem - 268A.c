#include<stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int host[n], guest[n];
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &host[i], &guest[i]);
    }
    int ara[101];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(host[i] == guest[j]) {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
