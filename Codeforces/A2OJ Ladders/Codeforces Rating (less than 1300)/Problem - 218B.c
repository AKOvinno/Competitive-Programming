#include<stdio.h>
int getMax(int a[], int n) {
   int max = a[0];
   for(int i = 1; i<n; i++) {
      if(a[i] > max)
         max = a[i];
   }
   return max;
}
void countSort(int a[], int n)
{
   int output[n+1];
   int max = getMax(a, n);
   int count[max+1];
  for (int i = 0; i <= max; ++i)
  {
    count[i] = 0;
  }
  for (int i = 0; i < n; i++)
  {
    count[a[i]]++;
  }
   for(int i = 1; i<=max; i++)
      count[i] += count[i-1];
  for (int i = n - 1; i >= 0; i--) {
    output[count[a[i]] - 1] = a[i];
    count[a[i]]--;
}
   for(int i = 0; i<n; i++) {
      a[i] = output[i];
   }
}
void swap(int *p,int *q)
{
    int tmp = *p;
    *p=*q;
    *q=tmp;
}
int main()
{
    int n, m, max = 0, min = 0;
    scanf("%d %d", &n, &m);
    int ara[m];
    int max_slot[m];
    for(int i = 0; i < m; i++) {
        scanf("%d", &ara[i]);
    }
    countSort(ara, m);
    int maximum[m];
    for(int i = m-1, j = 0; i >= 0; i--, j++) {
        maximum[i] = ara[j];
    }
    //Maximum
    int count = 0;
    int i = 0;
    while(count != n+1) {
        if(maximum[i] < maximum[i+1]) {
            printf("%d %d\n", maximum[i], maximum[i+1]);
            swap(&maximum[i], &maximum[i+1]);
        }
        max += maximum[i];
        maximum[i]--;
        count++;
//        if(maximum[i] == 0) {
//            i++;
//        }
        printf("max = %d, maximum[%d] = %d, maximum[%d] = %d\n", max, i, maximum[i], i+1, maximum[i+1]);
    }
    printf("%d %d\n", max, min);
    return 0;
}
