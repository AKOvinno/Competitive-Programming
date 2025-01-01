#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, k, count = 0;
        scanf("%d %d %d", &a, &b, &k);
        while(1) {
            if(b % k == 0 && (b/k) >= a) {
                b /= k;
                count++;
            }
            else if(b % k == 0 && (b/k) < a) {
                count += (b-a);
                break;
            }
            else if(b % k != 0) {
                count += (b%k);
                b -= (b%k);
            }
            if(b == a) {
                break;
            }
            //printf("%d %d %d %d\n", a, b, k, count);
        }
        printf("%d\n", count);
    }
    return 0;
}
