#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i % 2 == 0) {
                printf("#");
            }
            else {
                if(i % 4 == 1 && j == m-1) printf("#");
                else if(i % 4 == 3 && j == 0) printf("#");
                else printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
