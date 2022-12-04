#include<stdio.h>

int main()
{
    long long int n, m, a, ans, width_count = 0, length_count = 0;
    scanf("%lld %lld %lld", &n, &m, &a);
    if(n % a == 0) {
        width_count += n/a;
    }
    else {
        width_count += (n/a)+1;
    }
    if(m % a == 0) {
        length_count += m/a;
    }
    else {
        length_count += (m/a)+1;
    }
    printf("%lld\n", width_count*length_count);

    return 0;
}
