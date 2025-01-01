#include<stdio.h>
int main()
{
    int n, m, b = 0, w = 0;
    scanf("%d %d", &n, &m);
    char chess[n][m+1];
    for(int i = 0; i < n; i++) {
        scanf("%s", chess[i]);
        for(int j = 0; j < m; j++) {
            if(chess[i][j] == '.') {
                if((i+j) & 1) {
                    chess[i][j] = 'W';
                }
                else {
                    chess[i][j] = 'B';
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%s\n", chess[i]);
    }
    return 0;
}
