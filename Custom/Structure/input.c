#include<stdio.h>

//Global
struct student
{
    char name[100];
    int age;
    int id;
    float salary;
};

int main()
{
    struct student student1,student2,student3;

    printf("Enter Student1 Data:\n");

    printf("Enter Name: ");
    gets(student1.name);
    printf("Enter age: ");
    scanf("%d", &student1.age);
    printf("Enter Id: ");
    scanf("%d", &student1.id);
    printf("Enter Salary: ");
    scanf("%f", &student1.salary);

   printf("Enter Student2 Data:\n");

    printf("Enter Name: ");
    gets(student2.name);
    printf("Enter age: ");
    scanf("%d", &student2.age);
    printf("Enter Id: ");
    scanf("%d", &student2.id);
    printf("Enter Salary: ");
    scanf("%f", &student2.salary);
    printf("\n");


    printf("Student1 Data:\n");

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Id: %d\n", student1.id);
    printf("Salary: %f\n", student1.salary);

    printf("Student2 Data:\n");

    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Id: %d\n", student2.id);
    printf("Salary: %f\n", student2.salary);

 return 0;
}
