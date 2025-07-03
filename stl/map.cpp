#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
    map<string,int> mark_list = {{"phy",65},{"chem",75}};

    //insert
    mark_list.insert({"math",80});

    // update value by key
    mark_list.at("math") = 70;
    mark_list["math"] = 65;

    // accessing value
    printf("%d\n",mark_list["math"]);

    // printing map as key value
    for(auto it = mark_list.begin();it!= mark_list.end();it++)
    {
         printf("%d\t",it->second);
    }
   
    // deleting key value
    mark_list.erase("math");

    return 0;
}
