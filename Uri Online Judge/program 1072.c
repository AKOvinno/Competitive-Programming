#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int in = 0, out = 0;
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] > 9 && arr[i] < 21) {
            in++;
        }
        else {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}
