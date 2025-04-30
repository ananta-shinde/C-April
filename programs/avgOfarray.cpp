#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[6] = {25,23,56,12,56,44};
    int sum = 0;
    for(int i=0;i<6;i++){
       sum = sum+numbers[i];
    }
    printf("avg is : %d",sum/6);
    return 0;
}
