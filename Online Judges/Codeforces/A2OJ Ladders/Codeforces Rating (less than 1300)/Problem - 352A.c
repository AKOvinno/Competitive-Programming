#include<stdio.h>
int main()
{
    int n, flag = 1, five = 0, zero = 0;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    for(int i = 0; i < n; i++) {
        if(ara[i] == 5) {
            five++;
        }
        else if(ara[i] == 0) {
            flag = 0;
            zero++;
        }
    }
    if(flag) {
        printf("%d\n", -1);
        return 0;
    }
    if(five < 9) {
        printf("%d\n", 0);
        return 0;
    }
    if(five % 9 != 0) {
        five -= (five % 9);
    }
    for(int i = 0; i < five; i++) {
        printf("%d", 5);
    }
    for(int i = 0; i < zero; i++) {
        printf("%d", 0);
    }
    printf("\n");
    return 0;
}
