#include<stdio.h>
int main(int argc, char const *argv[])
{
    for(int j=0;j<4;j++){
        for(int i=0;i<4;i++){
            if(i>=(3-j)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
