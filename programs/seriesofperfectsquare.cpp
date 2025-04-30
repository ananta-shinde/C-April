#include<stdio.h>
int main(int argc, char const *argv[])
{
    int start, end;
    printf("enter start ");
    scanf("%d",&start);
    printf("enter end ");
    scanf("%d",&end);

    for(int n=start;n<=end;n++){
        for(int i=1;i<=n;i++){
            if((n/i) == i){
                printf("%d\t",n);
            }
        }
    }


    return 0;
}
