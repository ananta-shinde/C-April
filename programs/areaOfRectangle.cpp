#include<stdio.h>
int main(int argc, char const *argv[])
{
    float width,height,area;
    printf("enter width :");
    scanf("%f",&width);
    printf("enter height :");
    scanf("%f",&height);
    area = width*height;
    printf("area is : %f",area);
    return 0;
}
