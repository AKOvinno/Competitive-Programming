#include<stdio.h>
int main()
{
    int arr[5];
    int i, positive, even, negative, odd;

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    positive = even = negative = odd = 0;
    for (i = 0; i < 5; i++) {
        if (arr[i] %2 == 0) {
            even++;
        }
        if (arr[i] % 2 != 0) {
            odd++;
        }
        if (arr[i] > 0) {
            positive++;
        }
        if (arr[i] < 0) {
            negative++;
        }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}


