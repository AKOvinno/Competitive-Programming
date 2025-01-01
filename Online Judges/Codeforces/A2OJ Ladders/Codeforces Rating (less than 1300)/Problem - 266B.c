#include<stdio.h>

int main()
{
    int N, i, x;

    scanf("%d %d", &N, &x);
    char array[N];

    for(i = 0; i <= N; i++) {
        scanf("%c", &array[i]);
    }
    while(x) {
        for(i = 1; i <= N; i++) {
            if(array[i] == 'G' && array[i - 1] == 'B') {
                array[i - 1] = 'G';
                array[i] = 'B';
                i++;
            }
        }
        x--;
    }
    for(i = 0; i <= N; i++) {
        printf("%c", array[i]);
    }
    return 0;
}
