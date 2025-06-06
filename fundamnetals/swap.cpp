#include<stdio.h>

void swapNumbers(int* n1,int* n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main(int argc, char const *argv[])
{
    int n1=20;
    int n2=30;
    // int temp = n1;
    // n1 = n2;
    // n2 = temp;
    swapNumbers(&n1,&n2);
    printf("n1 :%d, n2:%d",n1,n2);
    return 0;
}
