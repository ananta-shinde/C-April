#include<stdio.h>

class Shape{
    public:
   virtual void calculateArea(){
        printf("\nshape class area called");
    }

};

class Circle : public Shape{
    public:
   void calculateArea(){
         printf("\ncircle class area called");
   }
};

class Rectangle : public Shape{
     public:
   void calculateArea(){
         printf("\nRectangle class area called");
   }
};


int main(int argc, char const *argv[])
{
    Shape* shape = new Shape();
    shape->calculateArea();
    Circle* circle = new Circle();
    circle->calculateArea();

    Shape* shapePtr = new Circle();
    shapePtr->calculateArea();

    shapePtr = new Rectangle();
    shapePtr->calculateArea();


    return 0;
}
