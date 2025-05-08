#include<stdio.h>
// define custom data type (student)
struct Student{
    int rollno;
    char name[40];
    float phy;
    float chem;
    float maths;
    float total;
};
int main(int argc, char const *argv[])
{
    // create a list of student
    Student stud_list[5];

    // accept and store data for 5 students
    for(int i=0;i<5;i++){
        printf("enter roll no :");
        scanf("%d",&stud_list[i].rollno);
        printf("enter name :");
        scanf("%s",&stud_list[i].name);
        printf("enter marks for phy :");
        scanf("%f",&stud_list[i].phy);
        printf("enter marks for chem :");
        scanf("%f",&stud_list[i].chem);
        printf("enter marks for maths:");
        scanf("%f",&stud_list[i].maths);
        stud_list[i].total = stud_list[i].phy+stud_list[i].chem+stud_list[i].maths;
    }

     // print data of all students
    for(int i=0;i<5;i++){
        printf("rollno :%d name:%s phy:%f chem:%f maths:%f , total : %f\n",stud_list[i].rollno,stud_list[i].name,stud_list[i].phy,stud_list[i].chem,stud_list[i].maths,stud_list[i].total);

    }

    float largest = stud_list[0].total;
    int topIndex = 0;
    for(int i=0;i<5;i++){
        if(stud_list[i].total > largest){
            topIndex = i;
            largest = stud_list[i].total;
        }
    }
    printf("\n******************************\n");
    printf("%s is topper with %f marks",stud_list[topIndex].name,stud_list[topIndex].total);





    
    return 0;
}
