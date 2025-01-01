#include<stdio.h>
int main()
{
    float salary;
    scanf("%f", &salary);
    if(salary >= 0000.00 && salary <=2000.00){
        printf("Isento\n");
    }
    salary -=2000;
    if (salary >=0000.00 && salary <=1000.00) {
        printf("R$ %0.2f\n", salary*0.08);
    }
    else if(salary >= 1000.01 && salary <= 2000.00) {
        float temp1 = ((salary - 1000) *0.18) +80;
        printf("R$ %0.2f\n", temp1);
    }
    else if (salary >= 2000.01 && salary <= 2500.00 ) {
        salary -= 1000;
        float part2 = (salary * 0.18) + 80;
        printf("R$ %0.2f\n", part2);
    }
    else if (salary >=2500.01) {
        salary -= 2500;
        float part3 = (salary * 0.28) + 350;
        printf("R$ %0.2f\n", part3);
    }
    return 0;
}
