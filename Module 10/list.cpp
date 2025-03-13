// // list create
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist;
//     cout<<mylist.size()<<endl;
//     return 0;
// }

// // initailize in list
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist(10,5);
//     cout<<mylist.front()<<endl;
//     return 0;
// }

// value access in linked listc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist(10,5);
    for(auto it=mylist.begin();it!=mylist.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
