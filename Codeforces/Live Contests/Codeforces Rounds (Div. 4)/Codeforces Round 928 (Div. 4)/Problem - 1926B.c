#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, one = 0, two = 0, count_one = 0, count_two = 0;
        scanf("%d", &n);
        char str[n+1][n+1];
        for(int i = 0; i < n; i++) {
            scanf("%s", str[i]);
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(str[i][j] == '1') {
                    if(count_one != -1) {
                        count_one++;
                    }
                    else if(count_two != -1) {
                        count_two++;
                    }
                }
            }
            if(count_one > 0) {
                one = count_one;
                count_one = -1;
            }
            else if(count_two > 0) {
                two = count_two;
                count_two = -1;
            }
        }
        if(one == two) {
            printf("SQUARE\n");
        }
        else {
            printf("TRIANGLE\n");
        }
    }
    return 0;
}
