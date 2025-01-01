#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a -*(int *)b);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(int), compare);
        int sum = a[0] + a[1];
        for (int i = 2; i < n; i++)
        {
            sum += 2 * a[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
