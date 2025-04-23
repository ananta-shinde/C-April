#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row,column;
    printf("enter no of rows:");
    scanf("%d",&row);
    printf("enter no of columns:");
    scanf("%d",&column);
    for(int j=0;j<row;j++){
        for(int i=0;i<column;i++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
