#include<stdio.h>

int main()
{
    int year, i, a, b, c, d;
    scanf("%d", &year);
    while(year != 0) {
        year++;
        a = year%10;
        b = (year/10)%10;
        c = (year/100)%10;
        d = (year/1000)%10;

        if(a != b && a != c && a != d && b != c && b != d && c != d) {
            printf("%d", year);
            break;
        }
    }
    return 0;
}
