#include<stdio.h>
int main()
{
    int n, m, max = -1, count = 0, min = 2000, diff;
    scanf("%d %d", &n, &m);
    int ara[m];
    for(int i = 0; i < m; i++) {
        scanf("%d", &ara[i]);
        if(ara[i] > max) {
            max = ara[i];
        }
    }
    int fre[max+1];
    for(int i = 0; i < max+1; i++) {
        fre[i] = 0;
    }
    for(int i = 0; i < m; i++) {
        fre[ara[i]]++;
    }
    int j = 0;
    for(int i = 0; i < max+1; i++) {
        if(fre[i] > 0) {
            while(fre[i] != 0) {
                ara[j] = i;
                fre[i]--;
                j++;
            }
        }
    }
    for(int i = 0; (i+(n-1)) < m; i++) {
        diff = ara[i+n-1] - ara[i];
        if(diff < min) {
            min = diff;
        }
    }
    printf("%d\n", min);
    return 0;
}
