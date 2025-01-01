#include<stdio.h>
#include<math.h>
int main()
{
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);
    int a = sqrt((s1*s3)/s2), b = sqrt((s1*s2)/s3), c = sqrt((s2*s3)/s1);
    printf("%d\n", 4*(a+b+c));
    return 0;
}
