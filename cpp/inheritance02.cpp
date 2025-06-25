#include<stdio.h>
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

class Trainer{

};

class Student{
     char name[40];
    bool operator==(Student* obj){
         return (strcmp(name,obj->name) == 0);
    }
};
class Course{
   Trainer trainer;
//    Student student[5];
    vector<Student> students;

    void addStudentToCourse(Student s){
        students.push_back(s);
    }

    void deleteStudent(Student* s){
        students.erase(find(students.begin(),students.end(),s));
    }

    void updateStudent(){

    }
};




int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
