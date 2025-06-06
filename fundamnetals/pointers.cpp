#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num = 30;
    int * temp = &num;
    // temp = &symbol;

    printf("%d\n",num);
    printf("%d\n",&num);
    printf("%d\n",temp);
    printf("%d",*temp);

    
    return 0;
}
