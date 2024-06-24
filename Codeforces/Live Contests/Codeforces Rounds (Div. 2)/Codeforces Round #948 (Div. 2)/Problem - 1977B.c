#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    unsigned long long int ara[32];
    for(int i = 0; i < 32; i++) {
        ara[i] = 0;
    }
    int two = 1;
    for(int i = 0; i < 32; i++) {
        ara[i] = two;
        two *= 2;
    }
    ara[31] *= -1;
    for(int i = 0; i < 32; i++) {
        printf("%d ", ara[i]);
    }
    while(t--) {
        int num;
        scanf("%d", &num);

    }
}
