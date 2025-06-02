#include<stdio.h>
struct Product{
    int id;
    char name[40];
    float price;
    char category[100];
};

void addProduct(Product arr[],int index){
    printf("enter product Id :");
    scanf("%d",&arr[index].id);
     printf("enter product name :");
    scanf("%s",&arr[index].name);
     printf("enter product price :");
    scanf("%f",&arr[index].price);
     printf("enter product category :");
    scanf("%s",&arr[index].category);
}

void printAllProducts(Product arr[],int size){
      for(int i=0;i<size;i++){
        printf("id:%d name:%s\n",arr[i].id,arr[i].name);
      }
}

void viewProductById(Product arr[],int size,int productId){
    for(int i=0;i<size;i++){
        if(arr[i].id == productId){
        printf("id:%d name:%s\n",arr[i].id,arr[i].name);
        }
      }
}


int main(int argc, char const *argv[])
{
    Product product_list[5];
    addProduct(product_list,2);
    // printAllProducts(product_list,5);
    viewProductById(product_list,5,100);
    return 0;
}
