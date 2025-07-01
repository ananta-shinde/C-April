#include<stdio.h>
#include<string.h>
#include <iostream>
#include<array>
#include <algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
    // int nums[5] = {10,10,10,10,10};

    // declare an array by using stl
    array<int,10> nums;
    // fill : setting default values to all elements in an array
    nums.fill(10);

    nums[2] = 20;
    nums[0] = 55;
    nums[4] = 15;

   // sort  : sorting array into ascending order
    sort(nums.begin(),nums.end());
   
   
   // size :  length of an array
    for(int i=0;i<nums.size();i++){
        printf("%d\t",nums[i]);
    }

    // size of an array
    
    
    return 0;
}

