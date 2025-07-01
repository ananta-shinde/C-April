#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    // declaring a vercor i.e dynamic array
    vector<int> nums;

    // push_back : adds new element at the end of vector
    nums.push_back(10);
    nums.push_back(55);
    nums.push_back(45);
    nums.push_back(12);

    // insert : this is to add new element by iterator
    nums.insert(nums.begin(),60);

     // sort :  sort a vector
    sort(nums.begin(),nums.end());

    // pop_back : delete last element from vector
    nums.pop_back();

    for(int i=0;i<nums.size();i++){
        printf("%d\t",nums[i]);
    }
    return 0;
}
