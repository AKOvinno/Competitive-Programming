#include<stdio.h>
int main()
{
    int i =0, j;
    for(j=1; j<1000; j++){
        if((j % 3) == 0 || (j % 5) == 0){
            i= i+j;
        }
        printf("%d\n", i);
    }
    return 0;
}
