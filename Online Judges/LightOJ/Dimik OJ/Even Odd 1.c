#include<stdio.h>
int main()
{
    int T, num;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d", &num);
        if(num%2 == 0) {
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    return 0;
}
