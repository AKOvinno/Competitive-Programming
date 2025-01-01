#include<stdio.h>
int main()
{
    int i, num;

    scanf("%d", &num);

    if(num % 2 == 0) {
        for (i = num+1; i < (num + 12); i+=2){
            printf("%d\n", i);
        }
    }
    if (num % 2 != 0){
        for (i = num; i < (num + 11); i+=2) {
            printf("%d\n", i);
        }
    }
    return 0;
}
