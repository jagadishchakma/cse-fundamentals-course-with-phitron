#include<stdio.h>

struct Person{
    int age;
    float salary;

};
int main(){
    struct Person jagadish;
    printf("Enter jagadish information: ");
    scanf("%d %f",&jagadish.age, &jagadish.salary);

    printf("Age = %d\nSalary = %0.0f",jagadish.age,jagadish.salary);
    return 0;
}