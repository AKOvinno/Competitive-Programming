#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, k, protein = 0, flag = 1;
        scanf("%d %d", &n, &k);
        int ara[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &ara[i]);
        }
        for(int i = 0; i < n; i++) {
            protein += ara[i];
            protein -= k;
            if(protein < 0) {
                printf("NO %d\n", i+1);
                flag = 0;
                break;
            }
        }
        if(flag) {
            printf("YES\n");
        }
    }
    return 0;
}
