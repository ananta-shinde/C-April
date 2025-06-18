#include<stdio.h>
#include<string.h>
class Student{
    private :
    int rollNo;
    char name[40];
    public:
   // default constructor
    // Student(){
    //     printf("constructor is called\n");
    //     rollNo = 100;
    // }

    Student(int value){
        printf("para constructor is called\n");
         rollNo = value;
    }

    void display(){
        printf("rollno : %d, name : %s\n",rollNo,name);
    }
    int getRollNo(){
        return rollNo;
    }
    // void setRollNo(int value){
    //     rollNo = value;
    // }

    char* getName(){
        return name;
    }

    void setName(char value[]){
        strcpy(name,value);
    }

};
int main(int argc, char const *argv[])
{
    Student s1(150),s2(200); 
    // s1.setRollNo(100);
    s1.getRollNo();
    s1.setName("Ananta");
    s1.display();
    s2.display();
    return 0;
}
