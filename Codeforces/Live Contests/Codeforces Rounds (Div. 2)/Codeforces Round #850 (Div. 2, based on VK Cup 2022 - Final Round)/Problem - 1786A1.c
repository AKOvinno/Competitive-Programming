#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, a = 1, b = 0, count = 0, i = 2;
        scanf("%d", &n);
        n--;
        while(n != 0) {
            if(i <= n && count < 2) {
                b += i;
                n -= i;
                count++;
            }
            else if(i > n && count < 2) {
                b += n;
                n = 0;
            }
            else if(i <= n && count > 1) {
                a += i;
                n -= i;
                count++;
            }
            else if(i > n && count > 1){
                a += n;
                n = 0;
            }
            if(count == 4)
                count = 0;
            i++;
        }
        printf("%d %d\n", a, b);
    }
    return 0;
}
