// eiccha moto delete korar jonno
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40,50,60,70};
    mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}