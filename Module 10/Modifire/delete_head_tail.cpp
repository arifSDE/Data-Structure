// pop front
// head delete 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist={10,20,30,40};
//     mylist.pop_front();
//     for(int val:mylist)
//     {
//         cout<<val<<endl;
//     }
//     return 0;
// }

// pop back
// tail delete
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,39,50};
    mylist.pop_back();
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}