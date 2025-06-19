#include<stdio.h>
#include<string.h>
class Product
{
    
    public :
    int id;
    char name[40];
    double price; 
    char category[20];

    void setName(char value[])
    {
        // check if name is valid
        strcpy(name,value);
    }
};

int main(int argc, char const *argv[])
{
    Product p;
    Product* p2 = new Product();
    printf("%d",p.id);
   
    
    return 0;
}
