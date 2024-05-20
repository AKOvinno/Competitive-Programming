#include<stdio.h>
int main()
{
    int k, count = 0, max = -1, total = 0, sum = 0;
    scanf("%d", &k);
    int ara[12];
    for(int i = 0; i < 12; i++) {
        scanf("%d", &ara[i]);
        if(max < ara[i]) {
            max = ara[i];
        }
        total += ara[i];
    }
    int fre[max+1];
    for(int i = 0; i < max+1; i++) {
        fre[i] = 0;
    }
    for(int i = 0; i < 12; i++) {
        fre[ara[i]]++;
    }
    if(k == 0) {
        printf("%d\n", count);
        return 0;
    }
    if(total < k) {
        printf("%d\n", -1);
        return 0;
    }
    int i = max;
    while(sum < k) {
        if(fre[i] > 0) {
            sum += i;
            count++;
            fre[i]--;
        }
        else {
            i--;
        }
    }
    printf("%d\n", count);
    return 0;
}
