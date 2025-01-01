#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int num, count = 0, power = 1;
        scanf("%d", &num);
        int backup_num = num;
        int ara[5];
        for(int i = 0; i < 5; i++) {
            ara[i] = -1;
        }
        for(int i = 0; i < 5 && num != 0; i++) {
            ara[i] = (num % 10);
            num /= 10;
            if(ara[i] > 0) {
                count++;
            }
        }
        if(count == 1) {
            printf("%d\n%d", count, backup_num);
        }
        else {
            printf("%d\n", count);
            for(int i = 0; i < 5; i++) {
                if(ara[i] > 0) {
                    printf("%d ", ara[i] * power);
                }
                power *= 10;
            }
        }
        printf("\n");
    }
    return 0;
}
