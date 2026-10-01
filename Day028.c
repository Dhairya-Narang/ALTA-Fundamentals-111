// Define a custom compound type (a struct in C, a class in Java/C++/JS) called Student with fields for name, age, and 
// marks. Create one Student, set its fields, and print them. 
// Input: name=Rahul, age=19, marks=88  Output: Rahul, 19, 88

#include <stdio.h>
#include <string.h>

struct Student{
    char name[100];
    int age,marks;
};

int main(){
    struct Student s;
    printf("Name : ");
    scanf("%s",&s.name);
    printf("Age : ");
    scanf("%d",&s.age);
    printf("Marks : ");
    scanf("%d",&s.marks);
    printf("%s, %d, %d,",s.name,s.age,s.marks);
}