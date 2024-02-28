#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, rooms = 0;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(int i = 0; i < n; i++) {
            if(ara[i] % 2 == 0) {
                rooms += (ara[i] / 2);
            }
            else {
                rooms += ((ara[i] / 2) + 1);
            }
        }
        printf("%d\n", rooms);
    }
    return 0;
}
