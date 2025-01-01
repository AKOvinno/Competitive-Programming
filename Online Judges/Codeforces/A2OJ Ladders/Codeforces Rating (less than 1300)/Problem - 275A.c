#include<stdio.h>
int light(int n)
{
    if(n == 0) {
        return 1;
    }
    return 0;
}
int main()
{
    int i, j, grid[3][3], initiallight[3][3];
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &grid[i][j]);
            if(grid[i][j] % 2 == 0) {
                grid[i][j] = 0;
            }
            else {
                grid[i][j] = 1;
            }
            initiallight[i][j] = 1;
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(grid[i][j] == 1) {
                initiallight[i][j] = light(initiallight[i][j]);
                if(i > 0) {
                    initiallight[i-1][j] = light(initiallight[i-1][j]);
                }
                if(j > 0) {
                    initiallight[i][j-1] = light(initiallight[i][j-1]);
                }
                if(i < 2) {
                    initiallight[i+1][j] = light(initiallight[i+1][j]);
                }
                if(j < 2) {
                    initiallight[i][j+1] = light(initiallight[i][j+1]);
                }
            }
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d", initiallight[i][j]);
        }
        printf("\n");
    }
    return 0;
}
