#include<stdio.h>

class Base{
   

   protected:
    int count;
    int marks;
   public:
   
    // default constructor
    Base(){
        count = 100;
        marks = 0;
    }

    // parametrized constructor
    Base(int value){
       count = value;
       marks = 0;
    }

    Base(int value, int m){
        count = value;
        marks = m;
    }

    void setCount(int value){
        count  = value;
    }

    int getCount(){
        return count;
    }

     void setMarks(int value){
        marks  = value;
    }

    int getMarks(){
        return marks;
    }

    void display(){
        printf("display from base class is called\n");
    }

};

class Derived : public Base{


   public:
    Derived(int value){

    }
    
    int getCount(){
       return count;
    }


};
int main(int argc, char const *argv[])
{
    Base* basePtr = new Base();
    Base* basePtr2 = new Base(150,300);
    // basePtr->count = 100;
    basePtr2->display();
    printf("%d\n",basePtr2->getCount());
    printf("%d",basePtr2->getMarks());

    Derived* devPtr = new Derived(300);
    printf("\n%d",devPtr->getCount());
    return 0;
}
