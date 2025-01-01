#include<stdio.h>

int main()
{
    int a, b, year;
    scanf("%d %d", &a, &b);
    for(year = 0; a <= b; year++) {
        a *= 3;
        b *= 2;
    }
    printf("%d\n", year);
    return 0;
}
