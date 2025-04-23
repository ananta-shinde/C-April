#include<stdio.h>
int main()
{
    int num;
    while(true){
        
        printf("enter number :");
        scanf("%d",&num);
        if(num >= 20 && num<=30){
            printf("my message");
            break;
        }else{
            printf("invalid input");
        }
    }
    


   return 0;
   }
