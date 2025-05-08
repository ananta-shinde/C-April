#include<stdio.h>
struct Student
{
    int rollNo;
    char name[40];
};


int main(int argc, char const *argv[])
{
    Student list[5];

    for(int i=0;i<5;i++){
        printf("enter roll no :");
        scanf("%d",&list[i].rollNo);
        printf("enter roll no :");
        scanf("%s",&list[i].name);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("roll no : %d, name : %s\n",list[i].rollNo,list[i].name);
    }
    
   
    return 0;
}
