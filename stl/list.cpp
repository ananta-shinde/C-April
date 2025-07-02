#include<stdio.h>
#include<algorithm>
#include<list>
using namespace std;
int main(int argc, char const *argv[])
{
    list<int> nums = {20,30,55};

    // insert into list
    nums.push_back(60);
    nums.push_front(15);
    auto it = nums.begin();
    advance(it,3);
    nums.insert(it,25);
    
    // size
    printf("%d\n",nums.size());

    // seach value in list
    it = find(nums.begin(),nums.end(),55);
    printf("element found %d\n",*it);

    // sort list
    nums.sort();

    // deleting element from list
    nums.pop_back();
    nums.pop_front();
    it = nums.begin();
    advance(it,2);
    nums.erase(it);
    nums.remove(25);


    // print list
    for(auto it = nums.begin();it != nums.end();it++){
          printf("%d\t",*it);
    }

    return 0;
}
