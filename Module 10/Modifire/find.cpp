// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist={10,20,30,40,50};
//     auto it=find(mylist.begin(),mylist.end(),40);
//     cout<<*it<<" ";
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={10,20,30,40};
    auto it=find(mylist.begin(),mylist.end(),50);
    if(it==mylist.end())
    {
        cout<<"Not found"<<" ";
    }
    else
    {
        cout<<"Found"<<" ";
    }
    return 0;
}