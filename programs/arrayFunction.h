#include<stdio.h>

void printArray(int arr[],int length){
    // int numbers[5];
    for(int i=0;i<length;i++){
        printf("%d\t",arr[i]);
    }
}

int indexOf(int arr[],int lenght, int searchvalue){
    int index = -1;
   
    for(int i=0;i<lenght;i++){
        if(arr[i] == searchvalue)
        {
            index = i;
        }
    }
    return index;
}

void updateArray(int arr[],int length,int value,int replacewith){
    int index = indexOf(arr,length,value);
    arr[index] = replacewith;
}