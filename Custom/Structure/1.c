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
    //student1.name="Burhan Kabir";
    student1.age=21;
    student1.id=23014008;
    student1.salary=50000;

    //student2.name="Burhan Kabir";
    student2.age=20;
    student2.id=23014028;
    student2.salary=55000;

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