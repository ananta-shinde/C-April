#include<stdio.h>
int main(int argc, char const *argv[])
{
    float radius,area;
    printf("enter radius :");
    scanf("%f",&radius);
   
    area = 3.14*radius*radius;
    printf("area is : %f",area);
    return 0;
}
