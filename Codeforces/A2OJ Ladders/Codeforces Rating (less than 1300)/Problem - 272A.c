#include<stdio.h>
int main()
{
    int n, fingers = 0, num_of_ways = 0;
    scanf("%d", &n);
    int ara[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
        fingers += ara[i];
    }
    int mod = fingers % (n + 1);
    for(int i = 1; i <= 5; i++) {
        if((fingers+i) % (n+1) != 1) {
            num_of_ways++;
        }
    }
    printf("%d\n", num_of_ways);
    return 0;
}
