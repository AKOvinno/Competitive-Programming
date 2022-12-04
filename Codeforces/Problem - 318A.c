#include<stdio.h>

int main()
{
    long long int n, k, odd, even, output;
    scanf("%lld %lld", &n, &k);

    odd = (n/2) + (n%2 != 0);

    if(k <= odd) {
        output = 2*k - 1;
    }
    else {
        output = 2*(k-odd);
    }
    printf("%lld\n", output);
    return 0;
}
