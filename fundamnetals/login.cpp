#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char username[40];
    char password[40];

   while(true){
    printf("enter username :");
    scanf("%s",&username);
    printf("enter password :");
    scanf("%s",&password);

    if(strcmp(username,"Admin")==0 && strcmp(password,"1234")==0){
        printf("login successfull");
        break;
    }else{
        printf("incorrect creds");
    }
   }

    return 0;
}
