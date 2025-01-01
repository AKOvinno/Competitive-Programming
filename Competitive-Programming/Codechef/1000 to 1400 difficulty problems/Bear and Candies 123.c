#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--) {
        int a, b, limak = 0, bob = 0, limak_eat = 1, bob_eat = 2;
        scanf("%d %d", &a, &b);
        while(1) {
            if(limak > a) {
                printf("Bob\n");
                break;
            }
            else {
                limak += limak_eat;
                limak_eat += 2;
            }
            if(bob > b) {
                printf("Limak\n");
                break;
            }
            else {
                bob += bob_eat;
                bob_eat += 2;
            }
        }
    }
    return 0;
}
