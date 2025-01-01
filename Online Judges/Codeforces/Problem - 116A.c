#include<stdio.h>
int main()
{
    int t, capacity = 0, max = 0;
    scanf("%d", &t);
    while(t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        capacity -= a;
        capacity += b;
        if(capacity > max) {
            max = capacity;
        }
    }
    printf("%d\n", max);
    return 0;
}
