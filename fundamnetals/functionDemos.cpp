#include<stdio.h>

int add(int n1,int n2){
   return n1+n2;
}

float calculateSI(float p,float r,float n){
    return (p*r*n)/100;
}

int add(int nums[],int length){

    int sum = 0;
    for(int i=0;i<length;i++){
        sum = + sum+nums[i]; 
    }
    return sum;

}


int main(int argc, char const *argv[])
{
     int n1,n2,result;
     float si;
     printf("enter a number");
     scanf("%d",&n1);
     printf("enter a number");
     scanf("%d",&n2);
     result = add(n1,n2);
    si = calculateSI(1000,5,10);
     printf("sum is %f",si);
    return 0;
}
