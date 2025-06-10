#include<stdio.h>
struct Node{
    int data;
    Node* next;
};


Node* insert(int value, Node* head){

    Node* n = new Node();
    n->data = value;
    n->next = NULL;
    head = n;
    return head;


}
int main(int argc, char const *argv[])
{
   
   Node* head = NULL;
   head = insert(40,head);
   head = insert(50,head);
   printf("%d",head->data);



   
    return 0;
}
