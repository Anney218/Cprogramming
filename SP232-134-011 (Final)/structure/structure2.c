
#include<stdio.h>

struct employee
{
    char name[100];
    int age;
    float salary;
    char designation[100];
};
int main()
{
    int n;
    printf("enter the number of employees: ");
    scanf("%d", &n);
    struct employee employees[n];
    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter details for employee %d:\n", i);
        printf("name: ");
        scanf(" %s", employees[i].name);
        printf("age: ");
        scanf("%d", &employees[i].age);
        printf("salary: ");
        scanf("%f", &employees[i].salary);
        printf("destination: ");
        scanf(" %s", employees[i].designation);
    }
    printf("\nEmployee details:\n");
    for (int i = 1; i <=n; i++)
    {
        printf("employee %d:\n", i);
        printf("name: %s\n", employees[i].name);
        printf("age: %d\n", employees[i].age);
        printf("salary: %.2f\n", employees[i].salary);
        printf("designation: %s\n", employees[i].designation);
        printf("\n");
    }
        return 0;
    }
