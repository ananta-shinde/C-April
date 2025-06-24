#include<stdio.h>
#include<string.h>
class User{
    int id;
    char name[40];
    char email[100];
    char password[20];
    char address[100];

    public :
    User(){
        id = 100;
    }
    User(char value[]){
        id = 100;
       strcpy(name,value);
    }
    User(int userid,char username[],char useremail[],char userpassword[]){
        id = userid;
       strcpy(name,username);
       strcpy(email,useremail);
       strcpy(password,userpassword);
    }
    void display(){
        printf("%d, %s",id,name);
    }

};
int main(int argc, char const *argv[])
{
    User* user = new User("Aanta");
    user->display();

    return 0;
}
