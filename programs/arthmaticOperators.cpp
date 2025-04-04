#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1,n2,result;
    printf("enter a number :");
    scanf("%d",&n1);
    printf("enter a number :");
    scanf("%d",&n2);
    result = n1+n2;
    printf("Addition is : %d\n",result);
    result = n1-n2;
    printf("Substraction is : %d\n",result);
    result = n1*n2;
    printf("Multiplication is : %d\n",result);
    result = n1/n2;
    printf("Devision is : %d\n",result);
    result = n1%n2;
    printf("Remainder is : %d\n",result);
    result++;
    printf("Incremented value is : %d\n",result);
    result--;
    printf("Decremented value is : %d\n",result);
    return 0;
}
