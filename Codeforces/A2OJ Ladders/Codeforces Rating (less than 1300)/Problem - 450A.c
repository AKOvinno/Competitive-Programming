#include<stdio.h>
int main()
{
    int n, m, max, index, flag = 1;
    scanf("%d %d", &n, &m);
    int ara[n], ara2[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    while(flag == 1) {
        for(int i = 0; i < n; i++) {
            if(ara[i] > m) {
                ara[i] = ara[i] - m;
            }
            else if (ara[i] != -1) {
                ara[i] = -1;
                index = i+1;
            }
        }
        flag = 0;
        for(int i = 0; i < n; i++) {
            if(ara[i] != -1) {
                flag = 1;
            }
        }
    }
    printf("%d\n", index);
    return 0;
}
