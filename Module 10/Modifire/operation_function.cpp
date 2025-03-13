// my list remove
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={20,30,40,50,70,10,20,10};
    mylist.remove(10);
    mylist.remove(20);
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}