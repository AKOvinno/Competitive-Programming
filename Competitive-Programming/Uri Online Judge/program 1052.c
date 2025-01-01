#include<stdio.h>
int main()
{
    char month[12][100] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int a;
    scanf("%d", &a);
    printf("%s\n", month[a-1]);
    return 0;
}
