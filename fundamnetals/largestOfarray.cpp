#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[4] = {20,45,56,12};
    int largest = numbers[0];
    for(int i=0;i<4;i++){
        if(numbers[i]>largest){
            largest = numbers[i];
        }
    }
    printf("largest value is %d",largest);
    return 0;
}
