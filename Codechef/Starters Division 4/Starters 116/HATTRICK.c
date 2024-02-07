#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int W = 0, flag = 1;
        char ch[6];
        for(int i = 0; i < 6; i++) {
            getchar();
            scanf("%c", &ch[i]);
        }
        for(int i = 0; i < 6; i++) {
            if(ch[i] == 'W') {
                W++;
                if(W == 3) {
                    printf("YES\n");
                    flag = 0;
                    W = 0;
                    break;
                }
            }
            else {
                W = 0;
            }
        }
        if(flag) {
            printf("NO\n");
        }
    }
    return 0;
}
