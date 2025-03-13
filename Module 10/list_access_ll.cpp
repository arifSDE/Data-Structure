// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>mylist(10,3);
//     for(auto it=mylist.begin();it!=mylist.end();it++)
//     {
//         cout<<*it<<endl;
//     }
//     return 0;
// }

// // list copy
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     list<int>list2={1,2,3,4,5};
//     list<int>mylist(list2);
//     for(auto it=mylist.begin();it!=mylist.end();it++)
//     {
//         cout<<*it<<endl;
//     }
//     return 0;
// }

// // Normal arry to list copy
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int ar[5]={1,2,3,4,5};
//     list<int>list(ar,ar+5);
//     for(auto it=list.begin();it!=list.end();it++)
//     {
//         cout<<*it<<endl;
//     }
//     return 0;
// }

// vector tor list cpy

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int>v{100,200,300};
//     list<int>mylist(v.begin(),v.end());
//     for(auto it=mylist.begin();it!=mylist.end();it++)
//     {
//         cout<<*it<<endl;
//     }
//     return 0;
// }

// same kaj ta sohoj loop use kor
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{2,3,4,5,5,6};
    list<int>mylist(v.begin(),v.end());
    for(int val:mylist)
    {
        cout<<val<<" ";
    }
    return 0;
}