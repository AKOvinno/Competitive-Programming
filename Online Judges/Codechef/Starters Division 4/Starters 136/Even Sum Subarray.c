#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, sum = 0, subara = 0, temp1 = 0, temp2 = 0, count1 = 0, count2 = 0;
        scanf("%d", &n);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
            sum += ara[i];
        }
        if(sum % 2 == 0) {
            subara = n;
        }
        else if(sum % 2 == 1) {
            for(int i = n-1; i >= 0; i--) {
                temp1 += ara[i];
                count1++;
                if(temp1 % 2 == 1) {
                    break;
                }
            }
            for(int i = 0; i < n; i++) {
                temp2 += ara[i];
                count2++;
                if(temp2 % 2 == 1) {
                    break;
                }
            }
        }
        if(count1 > count2) {
            subara = n - count2;
        }
        else {
            subara = n - count1;
        }
        printf("%d\n", subara);
    }
    return 0;
}
