// // short cut modifier
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist={10,20,30};
//     list<int>newlist;
//     newlist=mylist;
//     for(int val:newlist)
//     {
//         cout<<val<<endl;
//     }
//     return 0;
// }

// long cut Modifier
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40};
    list<int>newlist;
    newlist.assign(mylist.begin(),mylist.end());
    for(int val:newlist)
    {
        cout<<val<<" ";
    }
    

    return 0;
}