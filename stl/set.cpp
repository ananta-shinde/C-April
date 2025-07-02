#include<stdio.h>
#include<set>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    set<int> nums = {20,15,22,15};
   
    // insert 
    nums.insert(52);

    // delete
    nums.erase(22);

    // size
    printf("%d\n",nums.size());

    // print set
    for(auto it=nums.begin();it != nums.end();it++){
          printf("%d\t",*it);
    }
    return 0;
}
