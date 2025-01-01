#include<stdio.h>
#include<math.h>
int isPrime(int n)
{
    if(n <= 1)
        return 0;
    else if(n == 2 || n == 3) {
        return 1;
    }
    else if(n % 2 == 0) {
        return 0;
    }
    else {
        for(int i = 3; i <= sqrt(n); i+=2) {
            if(n % i == 0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n, m, next;
    scanf("%d %d", &n, &m);
    for(int i = n+1; i <= m; i++) {
        if(isPrime(i)) {
            next = i;
            break;
        }
    }
    if(m == next)
        printf("YES\n");
    else {
        printf("NO\n");
    }
    return 0;
}
