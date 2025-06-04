#include<stdio.h>
struct Address
{
    char address_line[100];
    char city[50];
    char state[50];
    char country[50];
};

struct College
{
    char name[100];
    Address address;
};


struct Student
{
    int id;
    char name[40];
    char email[100];
    char password[10];
    College* college;
    Address address;
};

void addStudent(Student arr[],int index){
    printf("enter id");
    scanf("%d",&arr[index].id);
    printf("enter name");
    scanf("%s",&arr[index].name);
    printf("enter email");
    scanf("%s",&arr[index].email);
    printf("enter password");
    scanf("%s",&arr[index].password);
    printf("enter address");
    scanf("%s",&arr[index].address.address_line);
    printf("enter city");
    scanf("%s",&arr[index].address.city);
    printf("enter state");
    scanf("%s",&arr[index].address.state);
    printf("enter country");
    scanf("%s",&arr[index].address.country);
}

void printAllStudent(Student arr[],int size){
    for(int i=0;i<size;i++)
    {
        printf("name:%s, city:%s\n",arr[i].name,arr[i].address.city);
    }
}

void printAllStudentByCity(Student arr[],int size,char city[]){
    for(int i=0;i<size;i++)
    {
        if(arr[i].address.city == city){
        printf("name:%s, city:%s\n",arr[i].name,arr[i].address.city);
        }
    }
}
void printStudentById(Student arr[],int size,int id){
    for(int i=0;i<size;i++)
    {
        if(arr[i].id == id){
        printf("name:%s, city:%s\n",arr[i].name,arr[i].address.city);
        }
    }
}
int main()
{
    Student stud_list[5]; 
    College MIT;
    stud_list[0].college = &MIT;
    addStudent(stud_list,0);
    addStudent(stud_list,1);
    printf("**************");
    printAllStudent(stud_list,5);
    printf("**************");
    printStudentById(stud_list,5,100);

    return 0;
}
