#include<stdio.h>
int main(int argc, char const *argv[]){
    int n1,n2,n3;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter a number :");
    scanf("%d",&n2);
    printf("enter a number :");
    scanf("%d",&n3);

    if(n1>n2 && n1>n3){
        printf("largest number is %d",n1);
    }
    else if(n2>n1 && n2>n3){
        printf("largest number is %d",n2);
    }
    else{
        printf("largest number is %d",n3);
    }
    
    
    
    return 0;
}
