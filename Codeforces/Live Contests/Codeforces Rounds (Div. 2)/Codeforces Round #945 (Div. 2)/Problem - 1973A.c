#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int ara[3], count = 0;
        for(int i = 0; i < 3; i++) {
            scanf("%d", &ara[i]);
        }
        int sum = ara[0]+ara[1]+ara[2];
        if(sum == 0) {
            count = 0;
        }
        else if(sum % 2 == 1) {
            count = -1;
        }
        else {
            if(sum/2 > (ara[0]+ara[1])) {
                count = ara[0] + ara[1];
            }
            else {
                count = sum / 2;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
