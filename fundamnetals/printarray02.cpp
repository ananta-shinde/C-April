#include<stdio.h>
int main(int argc, char const *argv[])
{
    // accept size from user
    int size;
    printf("enter no of values :");
    scanf("%d",&size);

    // declare an array
    int numbers[size];

    // accept values and put them into array
    for(int i=0;i<size;i++){
    printf("Enter a number :");
    scanf("%d",&numbers[i]);
    }
 
    // print an array
    for(int i=0;i<size;i++){
        printf("%d\t",numbers[i]);
    }
    return 0;
}
