// kono shonkha jodi 2 bar thake oita ekbar delete hoye shudu ekbar thakbe
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={10,30,70,30,50,10,20};
    myList.sort();
    myList.unique();
    for(int val:myList)
    {
        cout<<val<<" ";
    }
    return 0;
}