#include <stdio.h>
#include <string.h>
struct Employee{
    int id;
    char name[20];
    int salary;
    int age;
};
void main(){
    struct Employee e1;
    e1.id = 10;
    e1.salary = 5000;
    e1.age = 40;
    printf("%d\n",e1.id);
    strcpy(e1.name,"john wick");
    printf("%s\n",e1.name);
    printf("%d\n",e1.salary);
    printf("%d",e1.age);
}