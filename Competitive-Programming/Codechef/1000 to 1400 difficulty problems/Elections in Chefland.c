#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if(a > 50) {
            printf("A\n");
        }
        else if(b > 50) {
            printf("B\n");
        }
        else if(c > 50) {
            printf("C\n");
        }
        else {
            printf("NOTA\n");
        }
    }
    return 0;
}
