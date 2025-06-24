#include<stdio.h>

class Department{
     Manager manager;
     Product products[5];
};

class Employee{

};

class Manager:Employee{

};
class Product{

};

class Company{
    int regNo;
    char name[100];
    char address[100];
    Department dept_list[5];
    Employee emp_list[5];


    void display(){

    }

    void addnewDepartment(Department d){
        dept_list[0] = d;
    }

    void printDepartmentList(){

    }

    void addNewEmployee(Employee e){

    }
    
    void printEmployeeList(){

    }

    void updateDepartment(){

    }

    void updateEmployee(){
        
    }





    





};
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
