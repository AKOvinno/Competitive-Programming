#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int ara[4], count = 0;
        for(int i = 0; i < 4; i++) {
            scanf("%d", &ara[i]);
        }
        for(int i = 1; i < 4; i++) {
            if(ara[i] > ara[0]) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
