#include<stdio.h>

class Person{
    int id;
    char name[40];
    char email[100];
    char password[20];
    char address[100];
   
};

class college  {
    int id;
    char name[40];
    char email[100];
    char password[20];
    char address[100];

};

class Teacher :Person{
    double salary;
};

class Student : Person{
   
};

class Principle :Person{
   double salary;
};
int main(int argc, char const *argv[])
{
    Teacher* teacher = new Teacher();
    Student* student = new Student();
   
    return 0;
}
