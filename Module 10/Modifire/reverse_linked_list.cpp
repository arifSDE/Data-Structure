#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={10,30,40,60,20,90};
    myList.reverse();
    for(int val:myList)
    {
        cout<<val<<" ";
    }
    return 0;
}