#include<stdio.h>
#include"arrayFunction.h"

int main(int argc, char const *argv[])
{
    int numbers[5] = {20,45,55,12,41};
    printArray(numbers,5);
    updateArray(numbers,5,55,40);
    printf("\n");
    printArray(numbers,5);


    return 0;
}
