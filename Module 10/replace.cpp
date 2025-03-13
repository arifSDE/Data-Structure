#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,40,30,40,50};
    replace(mylist.begin(),mylist.end(),40,100);
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}