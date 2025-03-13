#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40};
    mylist.insert(next(mylist.begin(),2),100);
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}