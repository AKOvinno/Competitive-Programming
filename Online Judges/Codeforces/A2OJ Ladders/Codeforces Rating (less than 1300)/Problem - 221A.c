#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("%d\n", n);
        return 0;
    }
    printf("%d ", n);
    for(int i = 1; i < n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
