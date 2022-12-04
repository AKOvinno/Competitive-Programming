#include<stdio.h>

int main()
{
    int age, total = 0, count = 0;
    float average = 0.0;
    while(1) {
        scanf("%d", &age);
        if(age < 0) {
            break;
        }
        total+=age;
        count++;
    }
    average = (total*1.0/count*1.0);
    printf("%0.2f\n", average);
    return 0;
}
