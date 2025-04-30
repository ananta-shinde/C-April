#include<stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[4] = {20,45,56,12};
    int smallest = numbers[0];
    for(int i=0;i<4;i++){
        if(numbers[i]<smallest){
            smallest = numbers[i];
        }
    }
    printf("smallest value is %d",smallest);
    return 0;
}
