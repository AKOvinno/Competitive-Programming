#include<stdio.h>

int main()
{
    int array[5][5];
    int i, j, middle = 3, row, col, row_output, col_output;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(array[i][j] == 1) {
                row = i+1;
                col = j+1;
            }
        }
    }

    row_output = middle - row;
    if(row_output < 0) {
        row_output*=(-1);
    }
    col_output = middle - col;
    if(col_output < 0) {
        col_output*=(-1);
    }

    printf("%d\n", row_output+col_output);
    return 0;
}
