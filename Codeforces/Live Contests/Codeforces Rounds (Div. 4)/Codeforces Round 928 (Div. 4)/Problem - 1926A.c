#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        char str[6];
        int a = 0, b = 0, i;
        scanf("%s", str);
        for(i = 0; i < 5; i++) {
            if(str[i] == 'A') {
                a++;
            }
            else if (str[i] == 'B') {
                b++;
            }
        }
        if(a > b) {
            printf("A\n");
        }
        else {
            printf("B\n");
        }
    }
    return 0;
}
