#include<stdio.h>
int main()
{
    int n, m, max, index = 0, earn = 0, flag;
    scanf("%d %d", &n, &m);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        ara[i] *= -1;
    }
    while(m != 0) {
        max = ara[0];
        index = 0;
        flag = 1;
        for(int i = 0; i < n; i++) {
            if(ara[i] > max && ara[i] > 0) {
                max = ara[i];
                index = i;
            }
            if(ara[i] > 0) {
                flag = 0;
            }
        }
        if(flag) {
            break;
        }
        ara[index] = 0;
        earn += max;
        m--;
    }
    printf("%d\n", earn);
    return 0;
}
