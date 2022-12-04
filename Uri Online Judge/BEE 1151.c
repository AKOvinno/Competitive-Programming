#include<stdio.h>
int main(){
    int N,i,n[100];
    scanf("%d", &N);

    n[0] = 0;
    n[1] = 1;

    for(i = 2; i < N; i++){
        n[i] = n[i-1] + n[i-2];
    }
    printf("0");
    for(i = 1; i < N; i++){
        printf(" %d", n[i]);
    }
    printf("\n");
    return 0;
}
