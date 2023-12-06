#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if(num == 404) {
        printf("NOT FOUND\n");
    }
    else {
        printf("FOUND\n");
    }
    return 0;
}
