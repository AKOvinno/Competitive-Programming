#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, i, count = 0, one = 1, k = 0;
        scanf("%d", &n);
        int ara[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < n; i++) {
            if(ara[i] != 1) {
                count++;
                one = 0;
            }
        }
        if(one) {
            printf("1\n");
        }
        else if(count % 2 == 0) {
            count = count / 2;
            for(i = 0; i < n; i++) {
                if(ara[i] == 2) {
                    k++;
                }
                if(k == count) {
                    printf("%d\n", i+1);
                    break;
                }
            }
        }
        else {
            printf("-1\n");
        }
    }
    return 0;
}
