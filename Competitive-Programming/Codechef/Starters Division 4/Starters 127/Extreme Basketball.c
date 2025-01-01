#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int a, b, count = 0;
        scanf("%d %d", &a, &b);
        if(a >= (b+10)) {
            printf("%d\n", count);
            continue;
        }
        else {
            while(a < (b+10)) {
                if((a+2) >= (b+10)) {
                    a+=2;
                    count++;
                    break;
                }
                else {
                    a+=3;
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
