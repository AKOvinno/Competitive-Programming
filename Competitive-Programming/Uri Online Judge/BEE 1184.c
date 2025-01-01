#include<stdio.h>

int main()
{
    double M[12][12], sum = 0.0;
    int i, j, k = 0.0;
    char x[2];

    scanf("%s", &x);

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            if(i > j) {
                k++;
                sum+=M[i][j];
            }
        }
    }
    if(x[0] == 'S') printf("%0.1lf\n", sum);
    else if(x[0] == 'M') printf("%0.1lf\n", sum/k);

    return 0;

}

