#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str1[10];
    char str2[10];
    char result[20];
    printf("enter first string");
    scanf("%s",&str1);
    printf("enter 2nd string");
    scanf("%s",&str2);

    // strcpy(str1,str2);
    //strcat(str1,str2);
    // int r = strcmp(str1,str2);
    int r = strlen(str1);
    strrev(str1);
    
    printf("cmp output : %d\n",r);
    printf("string 1 :%s\n",str1);
    printf("result : %s",result);

    return 0;
}
