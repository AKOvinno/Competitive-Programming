#include<stdio.h>
int percentage_function(double first_salary)
{
    if (first_salary > 0 && first_salary <= 400){
        return 15;
    }
    else if (first_salary > 400 && first_salary <= 800){
         return 12;
    }
    else if (first_salary > 800 && first_salary <= 1200){
        return 10;
    }
    else if (first_salary > 1200 && first_salary <= 2000){
        return 7;
    }
    else if (first_salary > 2000){
        return 4;
    }
}
int main()
{
    double first, last_salary, percentage, money_earned;
    scanf("%lf", &first);
    char ch = '%';
    percentage = percentage_function(first);
    last_salary = first + (first * (percentage / 100));
    money_earned = (last_salary - first);

    printf("Novo salario: %0.2lf\n", last_salary);
    printf("Reajuste ganho: %0.2lf\n", money_earned);
    printf("Em percentual: %0.0lf %c\n", percentage, ch);

    return 0;
}
