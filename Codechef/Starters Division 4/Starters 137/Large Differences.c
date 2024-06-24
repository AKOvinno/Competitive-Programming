#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, k, total = 0, min = 10000000, min_index;
        scanf("%d %d", &n, &k);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
            if(ara[i] < min) {
                min = ara[i];
                min_index = i;
            }
        }
        for(int i = 0; i < n; i++) {

        }
    }
}
