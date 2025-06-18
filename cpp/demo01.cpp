#include<stdio.h>

class Student
{
    int rollno = 100;
    public :
   
    int marks;
    int total;
    void printdetails(){
     printf("rollno : %d,marks : %d",rollno,marks);
}
};



int main(int argc, char const *argv[])
{
    int rollNo=100,marks=80,total=520;
    int numbers[] = {100,80,520};
    Student s;
    // s.rollno = 100;
    s.marks = 80;
    s.total = 520;
     Student s2;
    // s2.rollno = 101;
    s2.marks = 90;
    s2.total = 520;

    s.printdetails();

    return 0;
}
