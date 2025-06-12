#include<stdio.h>
struct Node{
    int data;
    Node* next;
};


Node* insertAtEnd(int value, Node* head){

   // creating a new node
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    // if list is empty
    if(head == NULL){
       head = newNode;
    }else{
        // if list is not empty
       Node* temp = head;
       // travel till last node
       while(temp->next != NULL){
         temp=temp->next;
       }
       // assign new node to last node
       temp->next = newNode;
    }

    return head;
}

Node* insertAtStart(int value,Node* head){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    return head;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}

Node* deletebyValue(int value,Node* head){
    Node* temp = head;
    if(head->data == value){
        head = head->next;
    }else{
        while(temp->next->data != value){
            temp = temp->next;
        }
    }
    temp->next = temp->next->next;
    return head;

}
int main(int argc, char const *argv[])
{
   
   Node* head = NULL;
   head = insertAtStart(40,head);
   head = insertAtStart(50,head);
   head = insertAtEnd(60,head);
   head = insertAtStart(55,head);
   head = deletebyValue(55,head);
   printLinkedList(head);
   
  



   
    return 0;
}
