#include<stdio.h>
int gcd(int a, int b)
{
     int t, x, gcd;
     if (a == 0) gcd = b;
     else if (b == 0) gcd = a;
     else {
         while (b != 0) {
             t = b;
             b = a % b;
             a = t;
         }
         gcd = a;
     }
     return gcd;
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int x, max = 0, tmp, y = 0;
        scanf("%d", &x);
        for(int i = 1; i < x; i++) {
            tmp = gcd(x, i) + i;
            if(tmp > max) {
                max = tmp;
                y = i;
            }
        }
        printf("%d\n", y);
    }
    return 0;
}
